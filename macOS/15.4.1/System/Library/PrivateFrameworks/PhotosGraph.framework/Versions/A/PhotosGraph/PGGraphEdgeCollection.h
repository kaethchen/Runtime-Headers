@class MAEdgeFilter;

@interface PGGraphEdgeCollection : MAEdgeCollection

@property (class, readonly, nonatomic) Class edgeClass;
@property (class, readonly, nonatomic) MAEdgeFilter *filter;

+ (id)edgesFromNodes:(id)a0;
+ (id)edgesFrom:(id)a0 matching:(id)a1;
+ (id)edgesFrom:(id)a0 to:(id)a1 matching:(id)a2;
+ (id)edgesFromNodes:(id)a0 toNodes:(id)a1;
+ (id)edgesInGraph:(id)a0;
+ (id)edgesOfType:(unsigned long long)a0 betweenNodes:(id)a1 andNodes:(id)a2;
+ (id)edgesOfType:(unsigned long long)a0 onNodes:(id)a1;
+ (id)edgesTo:(id)a0 matching:(id)a1;
+ (id)edgesToNodes:(id)a0;

- (void)enumerateUsingBlock:(id /* block */)a0;

@end
