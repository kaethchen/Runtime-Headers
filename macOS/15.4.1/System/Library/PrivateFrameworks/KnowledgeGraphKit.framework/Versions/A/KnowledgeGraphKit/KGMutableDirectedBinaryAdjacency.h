@class _TtC17KnowledgeGraphKit39KGWrapperMutableDirectedBinaryAdjacency;

@interface KGMutableDirectedBinaryAdjacency : KGDirectedBinaryAdjacency

@property (readonly) _TtC17KnowledgeGraphKit39KGWrapperMutableDirectedBinaryAdjacency *mutableUnderlyingObject;

- (id)init;
- (void)insertSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (void)setTargets:(id)a0 forSource:(unsigned long long)a1;
- (void)formUnionWith:(id)a0;
- (void)removeSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (void)removeTargetsForSource:(unsigned long long)a0;
- (void)subtract:(id)a0;

@end
