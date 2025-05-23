@class NSString;

@interface AAPCommandQuit : SAAppsQuitApp <AFServiceCommand>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void)_closeApp:(id /* block */)a0;

@end
