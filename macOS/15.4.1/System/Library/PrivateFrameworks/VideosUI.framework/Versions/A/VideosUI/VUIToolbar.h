@class NSString, TVLibraryActivityButtonController, VUISearchField, NSSegmentedControl;
@protocol VUIToolbarDelegate;

@interface VUIToolbar : NSToolbar <NSToolbarDelegate, VUISearchFieldDelegate>

@property (retain, nonatomic) NSSegmentedControl *tabbarSegmentedControl;
@property (retain, nonatomic) VUISearchField *searchTextField;
@property (retain, nonatomic) TVLibraryActivityButtonController *activityButtonController;
@property (weak, nonatomic) id<VUIToolbarDelegate> vuiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)toolbar:(id)a0 itemForItemIdentifier:(id)a1 willBeInsertedIntoToolbar:(BOOL)a2;
- (id)toolbarAllowedItemIdentifiers:(id)a0;
- (id)toolbarDefaultItemIdentifiers:(id)a0;
- (void)_didSegmentedControlSwitchTabs:(id)a0;
- (id)initWithSegmentedControlItems:(id)a0 hasSearchTab:(BOOL)a1 selectedIndex:(unsigned long long)a2;
- (void)searchFieldDidBecomeFocus:(id)a0;
- (void)searchFieldDidResignFocus:(id)a0;
- (void)updateToolbarSegmentedControlWithSelectedTabIndex:(unsigned long long)a0;

@end
