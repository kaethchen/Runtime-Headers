@interface SRFLoggingDefaults : NSObject

+ (id)sharedDefaults;
+ (id)_sharedAssistantLoggingUserDefaults;

- (long long)loggingEnabled;
- (void)setLoggingEnabled:(BOOL)a0;

@end
