@class KGNodeFilter;

@interface KGNodeFilterRelation : NSObject <KGRelation>

@property (readonly, nonatomic) KGNodeFilter *nodeFilter;

- (void).cxx_destruct;
- (id)inverse;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 inGraph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 inGraph:(id)a1;
- (id)initWithNodeFilter:(id)a0;
- (id)targetNodeIdentifiersFromSourceNodeIdentifiers:(id)a0 inGraph:(id)a1;

@end
