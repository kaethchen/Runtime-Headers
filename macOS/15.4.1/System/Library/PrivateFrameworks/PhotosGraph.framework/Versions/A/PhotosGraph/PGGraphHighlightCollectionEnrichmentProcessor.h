@class NSString, NSDictionary;

@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {
    NSDictionary *_options;
}

@property (readonly, nonatomic) BOOL requiresValidGraph;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithOptions:(id)a0;
- (void)_enrichYearHighlights:(id)a0 monthsHighlights:(id)a1 withManager:(id)a2 curationContext:(id)a3 enrichmentprogressBlock:(id /* block */)a4;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;

@end
