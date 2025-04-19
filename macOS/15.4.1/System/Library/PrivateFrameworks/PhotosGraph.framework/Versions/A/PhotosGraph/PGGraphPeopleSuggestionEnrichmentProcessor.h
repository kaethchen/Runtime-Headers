@class NSString;

@interface PGGraphPeopleSuggestionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (readonly, nonatomic) BOOL requiresValidGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_performPeopleSuggestionForHomeWithManager:(id)a0 progressBlock:(id /* block */)a1;
- (void)_performPeopleSuggestionForSharedLibraryWithManager:(id)a0 progressBlock:(id /* block */)a1;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;

@end
