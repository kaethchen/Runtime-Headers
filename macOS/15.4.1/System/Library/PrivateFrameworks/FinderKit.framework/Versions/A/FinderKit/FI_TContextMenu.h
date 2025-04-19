@class NSString, NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TContextMenu : NSMenu <FPUIActionViewControllerDelegate> {
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _menuDidCompleteInteractionObserver;
}

@property (nonatomic) int contextMenuStateGeneration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addFilteredQuickActions:(id)a0 toMenu:(id)a1;
+ (void)addTagColorItemsToMenu:(id)a0 target:(id)a1 setTagColor:(SEL)a2;
+ (BOOL)allowContextualMenuForEvent:(id)a0;
+ (void)buildContextMenu:(id)a0 forContext:(int)a1 contextMenuDelegate:(id)a2 clickedView:(id)a3 maxItems:(unsigned long long)a4 addServices:(BOOL)a5;
+ (void)clearContextMenuState;
+ (id)contextMenuWithDelegate:(id)a0;
+ (void)handleContextMenuCommon:(int)a0 nodes:(const void *)a1 event:(id)a2 clickedView:(id)a3 contextMenuDelegate:(id)a4 addPlugIns:(BOOL)a5;
+ (BOOL)handleMouseDownAsRightMouseDown:(id)a0;
+ (void)populateTagActionsMenu:(id)a0 target:(id)a1 deleteTag:(SEL)a2 renameTag:(SEL)a3 setTagColor:(SEL)a4;
+ (void)showContextMenuInView:(id)a0 atPoint:(const struct CGPoint { double x0; double x1; } *)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (id).cxx_construct;
- (id)initWithTitle:(id)a0;
- (void)actionControllerDidFinishAction:(id)a0 error:(id)a1;
- (void)actionControllerDidLoadRemoteViewController:(id)a0 error:(id)a1;
- (void)cmdExecuteFileProviderCustomAction:(id)a0;
- (void)configureFor:(const void *)a0 contextMenuDelegate:(id)a1 clickedView:(id)a2 container:(BOOL)a3;
- (void)configureForTagNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 contextMenuDelegate:(id)a1 clickedView:(id)a2;
- (void)configureFromMenuNeedsUpdate:(id)a0 clickedView:(id)a1 container:(BOOL)a2 event:(id)a3 selectedNodes:(const void *)a4;

@end
