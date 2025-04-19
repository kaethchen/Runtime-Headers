@class NSString;

@interface WebServerConfig : NSObject {
    NSString *_configurationDirectory;
}

+ (id)sharedRemoteAdminServerConfig;
+ (id)sharedWebServerConfig;

- (void)dealloc;
- (id)initWithConfigurationDirectory:(id)a0;
- (BOOL)isValidServerName:(id)a0;
- (BOOL)isWebServerRunning;
- (void)restartWebServer;
- (void)startWebServer;
- (void)stopWebServer;
- (id)webServerName;

@end
