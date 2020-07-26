//-----------------------------------------------------------
//     Copyright (C) 2019 Piotr (Peter) Beben <pdbcas@gmail.com>
//     See LICENSE included.

#ifndef CLOUD_NORMAL_H
#define CLOUD_NORMAL_H

//#include <Eigen/Dense>

Eigen::Vector3f cloud_normal(
		const Eigen::Vector3f& p0, const std::vector<Eigen::Vector3f>& cloud,
		int niters = 10, double zeroTol = 0.0);

#endif // CLOUD_NORMAL_H
