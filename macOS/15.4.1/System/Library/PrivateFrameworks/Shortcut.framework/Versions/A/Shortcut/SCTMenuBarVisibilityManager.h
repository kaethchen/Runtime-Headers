@interface SCTMenuBarVisibilityManager : NSObject

@property (retain, nonatomic) id delegate;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void)_showMenu;
- (void)_showMenuFail;
- (void)_showMenuNow;
- (void)makeMenuBarVisible;

@end
