@class NSMutableArray;

@interface SPFusedResult : SFSearchResult_SpotlightExtras

@property (readonly) NSMutableArray *childResults;

- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (void)addResult:(id)a0;
- (BOOL)isLocalResult;

@end
