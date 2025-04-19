@class NSObject, NSString, NSMutableIndexSet, NSArray, NSMutableArray, SCRGuide;
@protocol AXVAMenuWindowInterface, OS_dispatch_queue;

@interface SCRVisualsMenuWindow : NSObject <AXVMenuWindowMouseEventDelegate> {
    NSObject<OS_dispatch_queue> *_menuWindowReaderWriterQueue;
}

@property (retain, nonatomic, setter=_setMenuAgent:) id<AXVAMenuWindowInterface> _menuAgent;
@property (copy, setter=_setGuideItems:) NSMutableArray *_guideItems;
@property (copy, setter=_setMenuItems:) NSMutableArray *_menuItems;
@property (copy, setter=_setAddedMenuItems:) NSMutableArray *_addedMenuItems;
@property (copy, setter=_setAddedMenuItemIndexes:) NSMutableIndexSet *_addedMenuItemIndexes;
@property (nonatomic, setter=_setMenuItemsReplaced:) BOOL _menuItemsReplaced;
@property (nonatomic, setter=_setMenuTitleUpdated:) BOOL _menuTitleUpdated;
@property (nonatomic, setter=_setShowContent:) BOOL _showContent;
@property (nonatomic) BOOL enabled;
@property (copy) NSString *title;
@property (copy) NSArray *items;
@property (weak, nonatomic) SCRGuide *guideForMenu;
@property long long rowCountToShow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addItems:(id)a0;
- (void)insertItem:(id)a0 atIndex:(unsigned long long)a1;
- (void)mouseDownOnMenuItem:(id)a0 atRowIndex:(long long)a1;
- (void)hideMenuWindow;
- (void)selectMenuItemAtIndex:(long long)a0;
- (void)setMenuFontSize:(double)a0;
- (void)showMenuWindow;
- (id)_convertSCRItemsToAXVItems:(id)a0;
- (void)_refreshDisplayedMenuItems:(id)a0;
- (BOOL)_shouldReplaceLastItemWhenAddingItems;
- (id)initWithMenuAgent:(id)a0;
- (void)refreshMenuIfNeeded;

@end
