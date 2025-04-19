@class NSViewBridge;
@protocol NSTitlebarPopoverLocalFileOpsViewControllerDelegate;

@interface NSTitlebarPopoverLocalFileOpsViewController : NSTitlebarPopoverViewController {
    NSViewBridge *_bridgeForUnregisteringKVO;
}

@property (weak, nonatomic) id<NSTitlebarPopoverLocalFileOpsViewControllerDelegate> oopDelegate;
@property (nonatomic) BOOL waitingToCleanUp;

+ (void)warmup;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithDataSource:(id)a0 oopDelegate:(id)a1;
- (id)_makeLocalizedLabelsDictionary;
- (BOOL)_setupBridge;
- (void)_unregisterLocalFileOpsObserversFromBridge;
- (void)finishUp;
- (void)loadView;
- (void)viewDidInvalidate:(id)a0;

@end
