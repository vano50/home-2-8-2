#pragma once
#include <iostream>

class incorrect : public std::domain_error {
public:
	const char* what() const override { return "Не верные параметры"; };
};