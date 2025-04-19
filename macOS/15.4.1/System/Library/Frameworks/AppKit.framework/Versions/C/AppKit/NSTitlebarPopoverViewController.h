@class NSError, NSViewBridge;
@protocol NSTitlebarPopoverViewControllerDataSource, NSDocumentTitlebarPopoverViewControllerDelegate;

@interface NSTitlebarPopoverViewController : NSViewController <NSRemoteViewDelegate> {
    id<NSTitlebarPopoverViewControllerDataSource> _dataSource;
    id<NSDocumentTitlebarPopoverViewControllerDelegate> _delegate;
    BOOL _lockStatusObserverAttemptedRegistration;
    NSError *_nonModalError;
    BOOL _isPerformingOperation;
    id /* block */ _operationWaiter;
    id /* block */ _advanceToRunPhaseWaiter;
    NSViewBridge *_bridgeForUnregisteringKVO;
}

@property (copy) id /* block */ invalidationHandler;
@property (readonly) BOOL shouldRetainExportedObject;

+ (Class)_remoteViewClass;
+ (Class)_sharedXPCListenerClass;
+ (void)warmup;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_didFinishOperation;
- (BOOL)_setupBridge;
- (void)_unregisterObservers;
- (void)_whenDocumentOperationCompletesPerformBlock:(id /* block */)a0;
- (void)_willStartOperation;
- (id)initWithDataSource:(id)a0;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1;
- (void)loadView;
- (void)prepareViewThenContinue:(id /* block */)a0;
- (void)viewDidAdvanceToRunPhase:(id)a0;
- (void)viewDidInvalidate:(id)a0;

@end
