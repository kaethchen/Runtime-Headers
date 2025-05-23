@class NSString, PGGraphBuilder;

@interface PGGraphIngestSocialGroupsProcessor : NSObject <PGGraphIngestProcessor, PGGraphMomentUpdateConsumer> {
    PGGraphBuilder *_graphBuilder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)requiredMomentUpdateTypes;

- (void).cxx_destruct;
- (id)initWithGraphBuilder:(id)a0;
- (void)insertAggregateSocialGroupsIntoGraph:(id)a0 progressBlock:(id /* block */)a1;
- (void)insertOwnerPetToRelevantSocialGroups:(id)a0 progressBlock:(id /* block */)a1;
- (void)processSocialGroups:(BOOL)a0 graph:(id)a1 progressBlock:(id /* block */)a2;
- (void)runWithGraphUpdate:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)shouldRunWithGraphUpdate:(id)a0;

@end
