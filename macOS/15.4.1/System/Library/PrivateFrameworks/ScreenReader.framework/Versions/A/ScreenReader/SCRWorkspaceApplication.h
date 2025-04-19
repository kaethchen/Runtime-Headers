@interface SCRWorkspaceApplication : NSApplication

@property (nonatomic) BOOL isRunLoopActive;

- (void)run;
- (id)_topLevelScriptingObject;
- (void)stop:(id)a0;
- (void)terminate:(id)a0;
- (void)_stopRunLoop;

@end
