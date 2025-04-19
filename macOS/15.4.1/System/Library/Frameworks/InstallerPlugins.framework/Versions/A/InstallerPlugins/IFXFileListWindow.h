@class NSLock, NSString, NSOutlineView, NSConditionLock, NSMutableDictionary, NSMutableArray, NSWindow, IFDCustomizationController, IFDInstallController;

@interface IFXFileListWindow : NSObject <NSToolbarDelegate> {
    NSWindow *uiWindow;
    NSOutlineView *uiFileListView;
    IFDInstallController *_installCtrl;
    IFDCustomizationController *_ctrl;
    NSMutableDictionary *_fileListingDictionary;
    NSString *_searchString;
    NSLock *_lock;
    NSMutableArray *_loadQueue;
    NSConditionLock *_queueLock;
    BOOL _threadShouldRun;
}

@property (readonly) NSWindow *window;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)fileControllerForWithInstallCtrl:(id)a0;

- (void)dealloc;
- (void)copy:(id)a0;
- (id)outlineView:(id)a0 child:(long long)a1 ofItem:(id)a2;
- (BOOL)outlineView:(id)a0 isItemExpandable:(id)a1;
- (long long)outlineView:(id)a0 numberOfChildrenOfItem:(id)a1;
- (id)outlineView:(id)a0 objectValueForTableColumn:(id)a1 byItem:(id)a2;
- (BOOL)outlineView:(id)a0 shouldSelectItem:(id)a1;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (BOOL)windowShouldClose:(id)a0;
- (void)backgroundThreadMethod;
- (id)filteredArray:(id)a0 withText:(id)a1;
- (id)getArrayForItem:(id)a0;
- (id)initWithInstallCtrl:(id)a0;
- (void)loadPathsForItem:(id)a0;
- (void)searchUsingToolbarSearchField:(id)a0;

@end
