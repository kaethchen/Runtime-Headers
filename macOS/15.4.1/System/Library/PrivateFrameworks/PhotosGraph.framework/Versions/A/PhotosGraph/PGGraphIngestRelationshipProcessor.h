@class NSString, PGGraphBuilder;

@interface PGGraphIngestRelationshipProcessor : NSObject <PGGraphIngestProcessor> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (unsigned long long)relationshipForRelationshipTag:(unsigned long long)a0;
- (id)_personNodesToAnalyzeInGraph:(id)a0;
- (id)initWithGraphBuilder:(id)a0;
- (void)insertRelationshipEdgesForRelationshipTags:(id)a0 meNode:(id)a1;
- (id)personNodesToAnalyzeInGraph:(id)a0 forAppleInternal:(BOOL)a1;
- (void)removeInferredRelationshipEdgesForPersonNodes:(id)a0 inGraph:(id)a1;
- (void)removeStorytellingRelationshipEdgesForPersonNodes:(id)a0 inGraph:(id)a1;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;
- (id)tagRelationshipByPersonForPersonNodes:(id)a0;

@end
