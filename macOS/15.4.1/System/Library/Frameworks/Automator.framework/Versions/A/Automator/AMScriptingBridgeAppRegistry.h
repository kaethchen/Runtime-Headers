@interface AMScriptingBridgeAppRegistry : NSObject

@property (class, readonly) AMScriptingBridgeAppRegistry *sharedAppRegistry;

+ (void)initialize;

- (id)scriptingAppForURL:(id)a0;

@end
