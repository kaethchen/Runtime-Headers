@class NSMenu, NSString, _NSRecentItemsMenuController;
@protocol UINSMenu;

@interface UINSMenuController : NSObject <UINSMenuController, NSMenuDelegate, NSSharingServicePickerDelegate>

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (retain, nonatomic) _NSRecentItemsMenuController *recentItemsController;
@property (copy, nonatomic) id /* block */ validateItem;
@property (copy, nonatomic) id /* block */ performItemAction;
@property (copy, nonatomic) id /* block */ menuWillAppear;
@property (copy, nonatomic) id /* block */ contextMenuDidClose;
@property (readonly, nonatomic) NSMenu *currentContextMenu;
@property (readonly, nonatomic) id<UINSMenu> currentContextMenuProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedMenuController;

- (void).cxx_destruct;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (void)noteNewRecentDocumentURL:(id)a0;
- (void)sharingServicePicker:(id)a0 didChooseSharingService:(id)a1;
- (id)sharingServicePicker:(id)a0 sharingServicesForItems:(id)a1 proposedSharingServices:(id)a2;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)_isItem:(id)a0 containedInContextMenu:(id)a1;
- (void)setMainMenuBar:(id)a0;
- (void)_actionForMenuItemWithProxyAndFixedTarget:(id)a0;
- (id)_createNSMenu:(id)a0 forContextMenu:(BOOL)a1;
- (id)_prepareToShowContextMenu:(id)a0 activityItemsConfiguration:(id)a1;
- (BOOL)_shouldShowOpenRecentMenu;
- (void)_showContextMenu:(id)a0 forView:(id)a1 withEvent:(id)a2;
- (void)dismissCurrentContextMenuAnimated:(BOOL)a0;
- (long long)maximumRecentItemsCount;
- (void)rebuildMenu:(id)a0;
- (void)replaceItemsInCurrentContextMenuWithItems:(id)a0;
- (void)showContextMenu:(id)a0 inWindow:(id)a1 atLocationInWindow:(struct CGPoint { double x0; double x1; })a2 activityItemsConfiguration:(id)a3;
- (void)showDropdownMenu:(id)a0 fromControlRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 inWindow:(id)a2 attachmentEdge:(unsigned long long)a3 alignmentEdge:(unsigned long long)a4 activityItemsConfiguration:(id)a5;
- (void)showSharingMenuInNSWindow:(id)a0 atLocationInWindow:(struct CGPoint { double x0; double x1; })a1 activityItemsConfiguration:(id)a2;
- (BOOL)validateMenuItem:(id)a0 proxyItem:(id)a1;

@end
