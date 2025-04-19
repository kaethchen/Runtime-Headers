@interface SCRKeyboardAccessInputManager : AXSSActionManager

@property (nonatomic) double _lastDefaultActionPressTime;
@property (nonatomic) double storedMaximumDelayUntilDoubleClick;
@property (nonatomic) BOOL shouldPerformDoubleTap;

- (void)moveDown;
- (void)moveUp;
- (void)goToLastElement;
- (void)goToNextSection;
- (void)activateTypeahead;
- (void)didPerformStandardCommandWithIdentifier:(id)a0;
- (void)didSuppressCommand:(id)a0;
- (void)goToFirstElement;
- (void)goToNextElementOfType:(unsigned long long)a0;
- (void)goToPreviousElementOfType:(unsigned long long)a0;
- (void)goToPreviousSection;
- (void)moveInsideNext;
- (void)moveInsidePrevious;
- (void)moveLeft;
- (void)movePointerToFocus;
- (void)moveRight;
- (void)nextCheckbox;
- (void)nextLink;
- (void)nextTable;
- (void)nextTextField;
- (void)openContextualMenu;
- (void)performDefaultAction;
- (void)performEscape;
- (void)previousCheckbox;
- (void)previousLink;
- (void)previousTable;
- (void)previousTextField;
- (void)showAccessibilityActions;
- (void)toggleApplicationList;
- (void)toggleControlCenter;
- (void)toggleDock;
- (void)toggleHelp;
- (void)toggleMenuBar;
- (void)toggleNotificationCenter;
- (void)togglePassthroughMode;
- (void)toggleWindowList;
- (void)willPerformStandardCommandWithIdentifier:(id)a0;

@end
