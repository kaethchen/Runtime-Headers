@class KGEdgeFilter;

@interface KGNeighborRelation : NSObject <KGRelation>

@property (readonly, nonatomic) KGEdgeFilter *edgeFilter;
@property (readonly, nonatomic) unsigned long long edgeDirection;

- (void).cxx_destruct;
- (id)inverse;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 inGraph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 inGraph:(id)a1;
- (id)initWithEdgeFilter:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)targetNodeIdentifiersFromSourceNodeIdentifiers:(id)a0 inGraph:(id)a1;

@end
