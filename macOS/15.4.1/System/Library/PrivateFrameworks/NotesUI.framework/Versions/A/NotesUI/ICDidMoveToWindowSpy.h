@interface ICDidMoveToWindowSpy : NSView

@property (readonly, weak, nonatomic) id owner;
@property (readonly, nonatomic) id /* block */ handler;

- (void).cxx_destruct;
- (void)viewDidMoveToWindow;
- (void)callHandler;
- (id)initWithOwner:(id)a0 handler:(id /* block */)a1;
- (void)scheduleCallHandler;

@end
