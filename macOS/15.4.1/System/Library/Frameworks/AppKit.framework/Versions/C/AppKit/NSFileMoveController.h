@class NSURL;

@interface NSFileMoveController : NSObject <NSRemoteViewDelegate, NSMovePanelRemoteViewControllerProtocol>

@property (retain) NSURL *initialURL;
@property (copy) id /* block */ completionHandler;
@property (readonly) BOOL began;
@property (readonly) BOOL shouldRetainExportedObject;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (id)exportedInterface;
- (void)_beginForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)beginForWindow:(id)a0 completionHandler:(id /* block */)a1;
- (void)complete:(long long)a0 url:(id)a1;
- (void)complete:(long long)a0 url:(id)a1 sandboxExtension:(id)a2;
- (void)remoteView:(id)a0 didAdvanceToConfigPhaseForWindow:(id)a1;
- (void)remoteView:(id)a0 didAdvanceToRunPhaseForWindow:(id)a1;
- (id)serviceViewControllerInterface;
- (void)view:(id)a0 encounteredError:(id)a1;
- (void)viewDidInvalidate:(id)a0;

@end
