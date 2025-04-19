@class _EXViewControllerSceneConfiguration, NSViewController;

@interface _EXExtensionViewController : NSViewController <_EXConnectionHandler>

@property (readonly) NSViewController *contentViewController;
@property (retain) _EXViewControllerSceneConfiguration *sceneConfiguration;

- (void).cxx_destruct;
- (void)loadView;
- (BOOL)shouldAcceptXPCConnection:(id)a0;
- (id)makeContentViewController;

@end
