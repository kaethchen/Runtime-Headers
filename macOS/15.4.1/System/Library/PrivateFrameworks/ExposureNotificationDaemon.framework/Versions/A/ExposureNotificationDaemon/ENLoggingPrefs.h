@interface ENLoggingPrefs : NSObject {
    BOOL _sensitiveLoggingEnabled;
    BOOL _rpiLoggingEnabled;
}

+ (id)sharedENLoggingPrefs;

- (id)init;
- (BOOL)isRPILoggingAllowed;
- (BOOL)isSensitiveLoggingAllowed;
- (void)loadLoggingPrefs;
- (void)setLoggingEntitledApp:(BOOL)a0;

@end
