@class NSDictionary;

@interface VUIJSApplication : VUIJSObject <VUIJSApplication>

@property (readonly, nonatomic) NSDictionary *traitCollection;

- (void)launchAppWithOptions:(id)a0;
- (void)reload:(id)a0 :(id)a1;
- (void)resumeAppWithOptions:(id)a0;
- (void)suspendAppWithOptions:(id)a0;

@end
