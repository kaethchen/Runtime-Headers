@class NSString, BrowserWindowController;

@interface WebBookmarkSandboxExtensionPresentationDelegate : NSObject <SandboxExtensionPresentationDelegate>

@property (weak, nonatomic) BrowserWindowController *browserWindowController;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)sandboxExtensionPresentationController:(id)a0 configureOpenPanel:(id)a1 forURL:(id)a2;
- (id)sandboxExtensionPresentationController:(id)a0 windowForURL:(id)a1;

@end
