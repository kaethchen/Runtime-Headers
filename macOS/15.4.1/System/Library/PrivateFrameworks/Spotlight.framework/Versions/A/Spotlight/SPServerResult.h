@interface SPServerResult : SFSearchResult_SpotlightExtras

- (id)initWithResult:(id)a0;
- (void)_indexItemWithAttributes:(id)a0;
- (void)updateRecentSpotlightEngagementData:(id)a0 date:(id)a1 renderPosition:(id)a2;
- (void)updateRenderOrEngagementCountsForKey:(id)a0 date:(id)a1;

@end
