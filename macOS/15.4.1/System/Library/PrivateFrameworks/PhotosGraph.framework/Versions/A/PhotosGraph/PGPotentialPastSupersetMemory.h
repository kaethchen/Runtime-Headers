@class PGGraphMomentNodeCollection, NSDateInterval, PGGraphLocationNode, PGGraphLocationNodeCollection;

@interface PGPotentialPastSupersetMemory : PGPotentialMemory

@property (readonly) PGGraphLocationNode *supersetLocationNode;
@property (readonly) NSDateInterval *supersetDateInterval;
@property (readonly) PGGraphMomentNodeCollection *interestingMomentNodes;
@property (retain) PGGraphLocationNodeCollection *supersetLocationNodes;

- (void).cxx_destruct;
- (unsigned long long)memoryCategorySubcategory;
- (id)initWithSupersetLocationNode:(id)a0 supersetDateInterval:(id)a1 interestingMomentNodes:(id)a2 momentNodes:(id)a3;
- (unsigned long long)memoryCategory;
- (id)memoryFeatureNodesInGraph:(id)a0;

@end
