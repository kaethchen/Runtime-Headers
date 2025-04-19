@class AXFWindowManagerController, SCRWindowManagerGroup;

@interface SCRWindowManagerApplication : SCRSystemApplication <AXFWindowManagerDataSource, AXFStageManagerWindowDataSource, AXFStageManagerWindowDelegate>

@property (retain) AXFWindowManagerController *wmController;
@property (retain, nonatomic) SCRWindowManagerGroup *_windowContainer;

- (void).cxx_destruct;
- (void)makeWindowKeyWithID:(unsigned int)a0;
- (id)titleForWindowID:(unsigned int)a0;
- (BOOL)windowIDIsValid:(unsigned int)a0;
- (id)windowIDsForProcess:(int)a0;
- (void)_updateChildrenWithDifferences:(id)a0;
- (void)_exitStageManager;
- (void)_focusOnStageManager:(id)a0;
- (void)_hideDesktop;
- (id)_isStageManagerEmpty;
- (void)_showDesktop;
- (void)_updateChildrenWithOutputRequest:(id)a0 event:(id)a1;
- (void)applicationDidInitialize;
- (BOOL)applicationNeedsWindows;
- (void)applicationWillInvalidate;
- (void)dispatchExitStageManager;
- (void)dispatchFocusOnStageManager:(id)a0;
- (void)dispatchHideDesktop;
- (BOOL)dispatchIsStageManagerEmpty;
- (void)dispatchShowDesktop;
- (void)dispatchUpdateChildrenWithDifferences:(id)a0;
- (BOOL)focusInto:(id)a0 event:(id)a1;
- (void)focusOut;
- (BOOL)isWindowManagerApplication;
- (id)newWindowsForGuideWithAppFocused:(BOOL)a0;

@end
