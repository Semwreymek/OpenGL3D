#pragma once
#include<glad/glad.h>
#include<GLFW/glfw3.h>
#include<iostream>

// Klasa do wywolywania i terminowania bibliotek 
class Libraries
{
public:
	static void InitAll();
	static void TerminateAll();
};