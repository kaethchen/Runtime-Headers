@class NSXPCListener;

@interface DEDConfiguration : NSObject

@property (retain) NSXPCListener *anonymousListener;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)identifier;
- (unsigned long long)connectionType;
- (id)errorDomain;
- (id)machServiceName;
- (const char *)loggingSubsystem;
- (id)dedDirectory;
- (void)invalidateTestListeners;
- (id)sharedAnonymousListener;

@end
