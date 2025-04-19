@interface AXAssistiveTouchServer : AXServer

+ (id)server;

- (void)closeMenu;
- (BOOL)home;
- (BOOL)_connectIfNecessary;
- (id)_serviceName;
- (id)menuItems;
- (void)menuAction:(id)a0;
- (BOOL)isMenuOpen;
- (BOOL)setPointerPosition:(struct CGPoint { double x0; double x1; })a0;
- (void)virtualPointer:(BOOL)a0;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (id)currentBubbleElement;
- (struct CGPoint { double x0; double x1; })getMenuItemPosition:(id)a0;
- (struct CGPoint { double x0; double x1; })getNubbitPosition;
- (struct CGPoint { double x0; double x1; })getPointerPosition;
- (void)openMenu;
- (void)pointerClick;
- (void)setNubbitPosition:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)tapMenuItem:(id)a0;

@end
