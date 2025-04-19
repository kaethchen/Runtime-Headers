@class NSMutableSet, PGManagerWorkingContext, PGDiscoveryFeedGenerationOptions;

@interface PGDiscoveryFeedGenerationSession : NSObject {
    PGDiscoveryFeedGenerationOptions *_options;
    PGManagerWorkingContext *_workingContext;
    NSMutableSet *_usedLocalIdentifiers;
}

- (void).cxx_destruct;
- (id)currentState;
- (id)additionalItemsWithTargetCount:(unsigned long long)a0;
- (id)initWithOptions:(id)a0 workingContext:(id)a1 state:(id)a2;
- (id)initWithOptions:(id)a0 workingContext:(id)a1;
- (void)_restoreState:(id)a0;

@end
