@interface SOConfigurationVersion : NSObject {
    long long _mode;
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;

- (void)dealloc;
- (id)initWithMode:(long long)a0;
- (unsigned long long)_state;
- (void)_setStateAndNotify:(unsigned long long)a0;
- (long long)checkVersion;
- (void)increaseVersionWithMessage:(id)a0;
- (void)setAppSSOUnavailable;

@end
