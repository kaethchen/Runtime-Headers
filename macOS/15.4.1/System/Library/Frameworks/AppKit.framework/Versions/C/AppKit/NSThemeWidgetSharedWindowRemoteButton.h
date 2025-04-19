@protocol NSThemeWidgetSharedWindowRemoteButtonDelegate;

@interface NSThemeWidgetSharedWindowRemoteButton : NSThemeWidgetRemoteView <NSRemoteViewDelegate, WindowSharingSharedWindowRemoteButtonHostProtocol>

@property (weak) id<NSThemeWidgetSharedWindowRemoteButtonDelegate> delegate;
@property (readonly) BOOL shouldRetainExportedObject;

+ (id)remoteServiceViewControllerClassName;

- (id)exportedInterface;
- (void)_updateAcceptsHover;
- (void)didAdvanceToConfigPhase;
- (void)didAdvanceToRunPhase;
- (void)endSharingForWindow;
- (id)serviceViewControllerInterface;
- (void)setMenuIsOpen:(BOOL)a0;
- (void)updateStyle;
- (void)windowMenuItemsForServiceWithReplyHandler:(id /* block */)a0;

@end
