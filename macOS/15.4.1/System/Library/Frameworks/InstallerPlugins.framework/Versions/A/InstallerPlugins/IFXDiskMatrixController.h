@class IFDTargetController, IFXDiskSelectView, NSProgressIndicator, NSMutableArray, NSLock;

@interface IFXDiskMatrixController : NSObject {
    IFDTargetController *_targetController;
    IFXDiskSelectView *_targetSelectView;
    NSProgressIndicator *_progressIndicator;
    BOOL _shouldAutoselectRootVolume;
    NSMutableArray *_targetsBeingObserved;
    long long _targetsBeingProcessed;
    NSLock *_KVODestructionLock;
    SEL _inclusionSelector;
}

@property (readonly, getter=isCurrentlyProcessingTargets) BOOL currentlyProcessingTargets;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setProgressIndicator:(id)a0;
- (void)_targetChanged:(id)a0;
- (void)_deregisterForTargetNotifications;
- (void)_registerForTargetNotifications;
- (void)_KVHandling:(id)a0;
- (void)_notifyObserversOfContentsChange:(id)a0;
- (void)_targetAppeared:(id)a0;
- (void)_targetAppearedMainThread:(id)a0;
- (void)_targetChangedMainThread:(id)a0;
- (void)_targetDisappeared:(id)a0;
- (void)_targetDisappearedMainThread:(id)a0;
- (void)filterTargetsWithInclusionSelector:(SEL)a0;
- (id)initWithTargetController:(id)a0 andDiskSelectView:(id)a1;
- (void)setShouldAutoselectRootVolume:(BOOL)a0;
- (void)startProcessingTargets;
- (void)startProcessingTargetsWithInclusionSelector:(SEL)a0;
- (void)updateTargetState:(id)a0;

@end
