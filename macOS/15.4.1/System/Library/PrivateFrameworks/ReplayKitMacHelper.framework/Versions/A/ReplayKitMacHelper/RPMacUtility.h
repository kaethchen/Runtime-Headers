@class NSStatusItem;

@interface RPMacUtility : NSObject {
    id _replayKitDelegate;
}

@property (retain, nonatomic) NSStatusItem *recStatusItem;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)windowDidDeminiaturize:(id)a0;
- (void)windowDidMiniaturize:(id)a0;
- (void)windowWillClose:(id)a0;
- (void)statusMenuStop:(id)a0;
- (void)registerForApplicationStateChangesWithSourceUIWindow:(id)a0;
- (void)removeSystemStatusItem;
- (void)setupSystemStatusItem;
- (void)unregisterForApplicationStateChanges;

@end
