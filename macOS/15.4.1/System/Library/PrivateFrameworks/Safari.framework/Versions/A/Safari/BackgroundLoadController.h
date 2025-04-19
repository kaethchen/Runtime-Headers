@class NSMutableDictionary, NSMutableSet;
@protocol BackgroundLoadControllerDelegate;

@interface BackgroundLoadController : NSObject {
    NSMutableDictionary *_urlsToUncommittedBackgroundLoads;
    NSMutableSet *_backgroundLoads;
}

@property (weak, nonatomic) id<BackgroundLoadControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)cancelBackgroundLoadIfPossible:(id)a0;
- (void)_backgroundLoadDidPerformFirstMeaningfulPaint:(id)a0;
- (void)_backgroundLoadDidPerformFirstVisuallyNonEmptyLayout:(id)a0;
- (id)_backgroundLoadPassingTest:(id /* block */)a0;
- (void)_cancelBackgroundLoadSoon:(id)a0;
- (void)_commitBackgroundLoadNow:(id)a0 wasDeferred:(BOOL)a1;
- (void)_commitBackgroundLoadNow:(id)a0 wasDeferred:(BOOL)a1 usingTabViewItemSetUpBlock:(id /* block */)a2;
- (void)_commitBackgroundLoadSoon:(id)a0;
- (void)_destinationPageCanBeClosedForCommittingBackgroundLoad:(id)a0;
- (void)_eventuallyReissueBackgroundLoadThatIsAwaitingDestinationPageClose:(id)a0;
- (void)_kickOffBackgroundLoad:(id)a0;
- (void)_removeBackgroundLoad:(id)a0;
- (void)_removeBackgroundLoadFromUncommittedUniqueBackgroundLoads:(id)a0;
- (void)_restartBackgroundLoadSoon:(id)a0;
- (void)_triedToCloseDestinationContentViewControllerBeforeCommittingBackgroundLoad:(id)a0 canClose:(BOOL)a1;
- (BOOL)_tryToCloseDestinationContentViewControllerBeforeCommittingToBackgroundLoad:(id)a0;
- (id)backgroundLoadBeingCommittedIntoTabViewItem:(id)a0;
- (id)backgroundLoadWithBrowserViewController:(id)a0;
- (id)backgroundLoadWithIdentifier:(id)a0;
- (id)backgroundLoadsInCollectionWithIdentifier:(id)a0;
- (id)backgroundLoadsPassingTest:(id /* block */)a0;
- (id)beginBackgroundLoadWithURLs:(id)a0 tabLabel:(id)a1 identifier:(id)a2 configuration:(id)a3;
- (BOOL)canLoadURLInBackground:(id)a0;
- (void)cancelBackgroundLoadOrReissueIfCommitted:(id)a0;
- (void)commitBackgroundLoad:(id)a0;
- (void)commitBackgroundLoadImmediately:(id)a0;
- (void)commitBackgroundLoadImmediately:(id)a0 usingTabViewItemSetUpBlock:(id /* block */)a1;
- (void)moveBackgroundLoad:(id)a0 toCollectionWithIdentifier:(id)a1;
- (void)restartBackgroundLoad:(id)a0;
- (void)startTrackingBackgroundLoad:(id)a0;
- (void)stopTrackingBackgroundLoad:(id)a0;
- (id)uncommittedUniqueBackgroundLoadWithURL:(id)a0;

@end
