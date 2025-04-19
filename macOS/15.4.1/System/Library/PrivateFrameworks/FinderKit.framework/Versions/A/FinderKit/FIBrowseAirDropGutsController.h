@class NSObject, NSArray, FI_TContainerLayoutManager, _FIBrowseAirDropView, FIBrowseAirDropContainerController, FI_TBrowserContentViewController;

@interface FIBrowseAirDropGutsController : FI_TViewController <BrowserContainerTargeting, BrowserContainerSearching, BrowserContainerDelegate> {
    FI_TBrowserContentViewController *_contentViewController;
    struct TKeyValueBinder { NSObject *fReceiverObj; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fReceiversBinding; } _activeContainerBinder;
    FI_TContainerLayoutManager *_containerLayoutManager;
    NSArray *_excludedURLs;
    struct vector<TString, std::allocator<TString>> { struct TString *__begin_; struct TString *__end_; struct __compressed_pair<TString *, std::allocator<TString>> { struct TString *__value_; } __end_cap_; } _excludedPaths;
}

@property (nonatomic) BOOL alreadyMovedIntoAWindow;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *fNodeRef; } pendingTarget;
@property (retain, nonatomic) FIBrowseAirDropContainerController *activeContainer;
@property (nonatomic) _FIBrowseAirDropView *browseAirDropView;
@property (copy, nonatomic) NSArray *selectedURLs;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)nibName;
- (id)initWithView:(id)a0;
- (void)viewDidAppear;
- (void)configureView;
- (BOOL)shouldShowRecents;
- (void)containerConnectBackupDelegate:(id)a0;
- (void)containerTitleSeparatorChanged:(id)a0;
- (void)aboutToDestroyBrowserView;
- (id)activeBrowserViewController;
- (BOOL)canBrowseNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)container:(id)a0 adjustProposedTargetPath:(void *)a1;
- (void)containerCloseContainer:(id)a0;
- (void)containerContentChanged:(id)a0;
- (void)containerForgetSpringState:(id)a0;
- (void)containerHistoryDidChange:(id)a0;
- (BOOL)containerInBrowseMode:(id)a0;
- (id)containerQuerySearchUTIs:(id)a0;
- (void)containerSelectionChanged:(id)a0;
- (void)containerTargetDidChange:(id)a0;
- (void)containerTargetWillChange:(id)a0;
- (BOOL)containerValidateToolbarItem:(id)a0;
- (void)containerViewStyleChanged:(id)a0;
- (void)containerWindowDidChange:(id)a0;
- (id)containerWindowState:(id)a0;
- (void)didChangeSelection;
- (void)searchDidBeginWithScopes:(const void *)a0 selectedScopeIndex:(unsigned int)a1;
- (void)searchWasChanged;
- (void)setInitialTarget;
- (void)setTarget:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 withViewStyle:(int)a1;
- (void)setTargetOrPendingTarget:(struct TFENode { struct OpaqueNodeRef *x0; })a0;
- (void)targetToConfiguredDirectory;
- (id)toolbarHistorySearchTemplate;
- (BOOL)toolbarMakeSearchFieldFirstResponder;
- (id)toolbarSearchField;
- (BOOL)toolbarSearchItemIsVisible;
- (void)viewMovedIntoAWindow;

@end
