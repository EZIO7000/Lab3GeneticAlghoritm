#pragma once

#include "Config.h"
#include "Course.h"
#include "Room.h"
#include "StudentsGroup.h"
#include <vector>
#include <string>
#include <iomanip>
#include<iostream>

using namespace std;

#define PAIRS_NUMBER_A_DAY 6;
#define WORK_DAYS_NUMBER 5;

class GAlgorithm {
public:
	enum class MutationType {
		ChangeDay,
		ChangePair,
		ChangeClassrom,
		ChangeCourse,
		ChangeProfessor,
		ChangeLecturePractice,
		ChangeGroup,
		AddPair,
		RemovePair,
	};

public:
	GAlgorithm(Config& config, size_t _crossoverProbability, size_t _mutationProbability);

	void Init();

	void Cross();

	void Mutate();

	bool CheckPairs();

	void AddPairs();

	void ProcessAlgorithm();

private:
	Config& _config;
	std::vector<std::string> _population;

	size_t _crossoverProbability;
	size_t _mutationProbability;
	size_t _removedPairs;

	string GeneratePair();
	
};