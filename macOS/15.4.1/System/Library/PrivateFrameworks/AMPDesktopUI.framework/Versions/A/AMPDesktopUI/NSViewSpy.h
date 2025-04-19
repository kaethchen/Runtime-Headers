@class NSTextField, NSView, NSButton, ISVisualizationWindow, NSOutlineView, LayoutToolsController, NSPopUpButton, NSObject, ViewSpyPropsController, NSPopover, INTObjectListController, NSSegmentedControl;

@interface NSViewSpy : NSWindowController

@property (weak, nonatomic) NSObject *mCurrentObject;
@property (weak, nonatomic) NSButton *mObjectPopup;
@property (weak, nonatomic) NSTextField *mLockLabel;
@property (weak, nonatomic) NSSegmentedControl *mTabControl;
@property (weak, nonatomic) NSView *mContentArea;
@property (retain, nonatomic) NSPopover *mObjectPopover;
@property (retain, nonatomic) INTObjectListController *mPopoverObjectList;
@property (weak, nonatomic) NSPopUpButton *mRootWindowsPopup;
@property (retain, nonatomic) ISVisualizationWindow *mVizWindow;
@property (retain, nonatomic) NSPopUpButton *mOptionsButton;
@property (retain, nonatomic) NSOutlineView *mProperties;
@property (retain, nonatomic) id mEventMonitor;
@property (retain, nonatomic) ViewSpyPropsController *mPropertiesTab;
@property (retain, nonatomic) LayoutToolsController *mLayoutTab;
@property (nonatomic) int currentTab;
@property (nonatomic) BOOL appearanceIsSystem;
@property (nonatomic) BOOL appearanceIsInverted;
@property (nonatomic) BOOL appearanceIsAlwaysDark;

+ (id)sharedInstance;
+ (BOOL)isSpyOpen;
+ (void)showSpyOrToggleLock;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)awakeFromNib;
- (BOOL)isLocked;
- (void)visualizeConstraints:(id)a0;
- (void)windowDidBecomeMain:(id)a0;
- (void)windowDidLoad;
- (void)windowWillClose:(id)a0;
- (id)selectedObject;
- (void)setSelectedObject:(id)a0;
- (id)_currentVizOptionsWithShowingPlacard:(BOOL)a0;
- (void)_dumpItemLayerTree:(id)a0;
- (void)_reloadCurrentViewInformation;
- (void)_updateViewSpyInfo;
- (BOOL)canNavigateToObject:(id)a0;
- (void)makeSureLocked;
- (void)objectPopupClicked:(id)a0;
- (void)outlineNodeCell:(id)a0 doubleClicked:(id)a1;
- (void)outlineNodeCell:(id)a0 dumpLayerTree:(id)a1;
- (void)outlineNodeCell:(id)a0 rolledOut:(id)a1;
- (void)outlineNodeCell:(id)a0 rolledOver:(id)a1;
- (void)redrawVisualization;
- (void)rootWindowChanged:(id)a0;
- (void)rootWindowsAboutToShow:(id)a0;
- (void)toggleViewLock;
- (void)updateFromMouseMove:(id)a0;
- (void)updateFromMouseMoveForced:(id)a0;
- (void)updateVisualization;
- (void)visualizeSecondaryObject:(id)a0 activate:(BOOL)a1;

@end
