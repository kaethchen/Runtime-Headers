@class PGGraphBuilder, NSString, MABinaryAdjacency, PGGraphHighlightGroupNodeCollection;

@interface PGGraphIngestTripProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
    PGGraphHighlightGroupNodeCollection *_allTripNodes;
    MABinaryAdjacency *_featuredLocationNodesByHighlightGroupNode;
    PGGraphHighlightGroupNodeCollection *_tripsMissingFeaturedLocations;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (id)allTripNodes;
- (id)featuredLocationNodesByHighlightGroupNode;
- (void)ingestLocationFeaturesForTripNodes:(id)a0 graph:(id)a1 loggingConnection:(id)a2 progressBlock:(id /* block */)a3 isResumingFullAnalysis:(BOOL)a4;
- (id)initWithGraphBuilder:(id)a0;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (id)tripsMissingFeaturedLocations;

@end
