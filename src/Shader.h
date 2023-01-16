#pragma once

#include <string>

#include <GLAD/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader
{
public:
	unsigned int ID;

	Shader() {};
	Shader& Use();

	void Compile(const char* vertexSource, const char* fragmentSource, const char* geometrySource = nullptr);
	void SetFloat(const char* name, float value, bool useShader = false);

private:
	void checkCompileErrors(unsigned int object, std::string type);
};
