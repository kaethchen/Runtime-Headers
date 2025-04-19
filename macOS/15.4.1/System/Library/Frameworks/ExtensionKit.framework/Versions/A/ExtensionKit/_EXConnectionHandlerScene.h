@class NSString, NSViewController;

@interface _EXConnectionHandlerScene : NSObject <_EXViewControllerScene>

@property (retain) NSViewController *viewController;
@property (retain) id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)shouldAcceptConnection:(id)a0;
- (void)connectToSession:(id)a0;

@end
