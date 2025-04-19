@protocol JRSMenuDelegate;

@interface JRSMenu : NSMenu

@property (retain, nonatomic) id<JRSMenuDelegate> _delegate;
@property (nonatomic) struct OpaqueEventHandlerRef { } *menuEventHandler;
@property (nonatomic) struct OpaqueEventHandlerRef { } *mouseEventHandler;

- (void)dealloc;
- (id)initWithTitle:(id)a0;
- (void)_releaseMenuHandlers;
- (void)handleJavaMenuEvent:(struct OpaqueEventRef { } *)a0;
- (void)handleJavaMouseEvent:(struct OpaqueEventRef { } *)a0;
- (void)installCarbonEventHandlers:(id)a0;
- (BOOL)isJavaMenu;

@end
