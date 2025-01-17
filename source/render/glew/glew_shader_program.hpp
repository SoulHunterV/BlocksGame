#pragma once

#include "glew_headers.hpp"
#include "glew_shader.hpp"


class GlewShaderProgram
{
public:
  GlewShaderProgram(const GlewShader& vertexShader, const GlewShader& fragmentShader);
  GlewShaderProgram(const GlewShader& vertexShader, const GlewShader& geometryShader, const GlewShader& fragmentShader);
  ~GlewShaderProgram();

  void Set();
  void Unset();

  GLuint GetId() const;
  bool IsLinked() const;

  void SetBool(const std::string& name, bool value) const;
  void SetInt(const std::string& name, int value) const;
  void SetFloat(const std::string& name, float value) const;
  void SetVec2(const std::string& name, const glm::vec2& value) const;
  void SetVec2(const std::string& name, float x, float y) const;
  void SetVec3(const std::string& name, const glm::vec3& value) const;
  void SetVec3(const std::string& name, float x, float y, float z) const;
  void SetVec4(const std::string& name, const glm::vec4& value) const;
  void SetVec4(const std::string& name, float x, float y, float z, float w) const;
  void SetMat2(const std::string& name, const glm::mat2& mat) const;
  void SetMat3(const std::string& name, const glm::mat3& mat) const;
  void SetMat4(const std::string& name, const glm::mat4& mat) const;

  static OpResult LoadFromFile(const char* vertexPath, const char* fragmentPath, GlewShaderProgram** shaderProgram);
  static OpResult LoadFromFile(const char* vertexPath, const char* geometryPath, const char* fragmentPath, GlewShaderProgram** shaderProgram);

protected:
  GlewShaderProgram();

  GLuint _shaderProgram;
  bool _isLinked;

  void Link();
};
