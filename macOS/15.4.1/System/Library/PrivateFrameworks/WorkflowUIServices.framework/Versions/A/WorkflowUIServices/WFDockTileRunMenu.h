@class WFObservableArrayResult;

@interface WFDockTileRunMenu : NSMenu

@property (readonly, nonatomic) WFObservableArrayResult *folders;
@property (readonly, nonatomic) WFObservableArrayResult *shortcuts;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)rebuildMenu;
- (id)initWithTitle:(id)a0 collection:(id)a1;
- (void)runShortcut:(id)a0;

@end
