@class MAEdgeFilter;

@interface MANeighborRelation : MARelation

@property (readonly, nonatomic) unsigned long long edgeType;
@property (readonly, copy, nonatomic) MAEdgeFilter *edgeFilter;

+ (id)scanRelationWithScanner:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)inverse;
- (id)transitiveClosure;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;
- (id)adjacencyWithEndNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)initWithEdgeType:(unsigned long long)a0 edgeFilter:(id)a1;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;
- (id)visualString;

@end
