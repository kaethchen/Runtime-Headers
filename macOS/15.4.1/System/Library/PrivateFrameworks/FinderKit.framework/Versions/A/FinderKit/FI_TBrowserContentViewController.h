@class NSString, FI_TBrowserContainerController, FI_TContainerLayoutManager, NSMutableArray;

@interface FI_TBrowserContentViewController : FI_TViewController <TMarkTornDown> {
    struct TNSWeakPtr<FI_TBrowserContainerController> { FI_TBrowserContainerController *fWeakObject; } _weakBrowserContainerController;
    NSMutableArray *_layoutConstraints;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (weak, nonatomic) FI_TBrowserContainerController *browserContainerController;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)aboutToTearDown;
- (void)initCommon;
- (double)statusBarHeight;
- (void)addBrowserContainerView;
- (id)initWithContentView:(id)a0 containerLayoutManager:(id)a1;
- (BOOL)isInBrowseMode;
- (BOOL)isStatusBarVisible;
- (void)removeBrowserContainerView;

@end
