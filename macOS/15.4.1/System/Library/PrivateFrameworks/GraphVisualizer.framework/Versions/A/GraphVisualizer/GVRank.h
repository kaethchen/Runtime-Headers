@class NSMutableArray;

@interface GVRank : NSObject {
    NSMutableArray *nodes;
    double separation;
}

@property (nonatomic) GVRank *prev;
@property (nonatomic) GVRank *next;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;

- (void)dealloc;
- (id)nodes;
- (void)addNode:(id)a0;
- (void)buildNodeIterators;
- (void)centerNode:(id)a0 at:(double)a1;
- (void)centerNodesWithRespectoTo:(id)a0;
- (void)exchangeNodeAtIndex:(unsigned long long)a0 withNodeAtIndex:(unsigned long long)a1;
- (unsigned long long)inCrossings;
- (id)initWithSeparation:(struct CGSize { double x0; double x1; })a0;
- (id)neighborsOfNode:(id)a0;
- (unsigned long long)outCrossings;
- (void)removeNode:(id)a0;
- (struct CGSize { double x0; double x1; })sizeForDummy;
- (void)sortByIndex;

@end
