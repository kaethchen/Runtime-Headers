@protocol WFExternalUIPresenterConnection;

@interface WFExternalUIPresenter : NSObject

@property (readonly, nonatomic) id<WFExternalUIPresenterConnection> connection;
@property (nonatomic) BOOL connected;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)willBeginExecutingShortcutStep:(id)a0;
- (void)didFinishActionWithIdentifier:(id)a0;
- (void)didStartActionWithIdentifier:(id)a0;
- (void)performDialogRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)performSiriRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)willBeginExecutingShortcutWithActionCount:(id)a0;

@end
