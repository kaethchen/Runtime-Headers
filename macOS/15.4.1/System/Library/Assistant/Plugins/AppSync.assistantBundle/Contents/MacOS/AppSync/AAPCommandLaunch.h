@class NSString;

@interface AAPCommandLaunch : SAAppsLaunchApp <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0 serviceHelper:(id)a1 executionInfo:(id)a2;

@end
