@interface PIEKMeans : NSObject

+ (double)bayesianInformationCriterion:(id)a0 clusterGroups:(id)a1 dimensions:(unsigned long long)a2 numClusters:(unsigned long long)a3;
+ (id)cluster:(id)a0 withVectors:(id)a1;
+ (id)cluster:(id)a0 withVectors:(id)a1 intoNumClusters:(unsigned long long)a2;
+ (id)cluster:(id)a0 withVectors:(id)a1 intoNumClusters:(unsigned long long)a2 score:(double *)a3 variance:(double *)a4;
+ (id)kMeans:(id)a0 intoNumClusters:(unsigned long long)a1 maxIterations:(unsigned long long)a2 minEpsilon:(float)a3;
+ (id)xKMeans:(id)a0 withVectors:(id)a1 numClusters:(unsigned long long)a2;
+ (id)xMeans:(id)a0 withVectors:(id)a1;

@end
