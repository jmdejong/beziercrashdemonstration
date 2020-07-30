

#include "FeatureElements.h"


int main(int argc, char *argv[]){
	std::vector<int> ids = {0, 1, 2, 3, 4, 5};
	std::vector<double> paras = {0.0, 0.2, 0.4, 0.6, 0.8, 1.0};
	triwild::ControlVector r;
	triwild::feature::BezierCurve_Feature feature(
		ids,
		paras,
		3,
		r,
		2);
	return 0;
}
