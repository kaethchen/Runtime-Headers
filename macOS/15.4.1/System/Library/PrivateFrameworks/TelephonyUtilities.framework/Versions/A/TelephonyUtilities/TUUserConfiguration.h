@class CoreTelephonyClient;

@interface TUUserConfiguration : TUConfiguration

@property (readonly, nonatomic) CoreTelephonyClient *coreTelephonyClient;

+ (id)userDefaults;
+ (id)registeredDefaults;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)isBusinessConnectCallingEnabled;
- (id)getBooleanFromUserDefaults:(id)a0 default:(id)a1;
- (BOOL)isBrandedCallingEnabled:(id)a0;
- (BOOL)isCallScreeningEnabled;
- (BOOL)isSilenceJunkCallingEnabled;
- (BOOL)isSilenceUnknownCallersEnabledForFaceTime;
- (BOOL)isSilenceUnknownCallersEnabledForPhone;
- (void)setBrandedCallingEnabled:(BOOL)a0 subscription:(id)a1;
- (void)setBusinessConnectCallingEnabled:(BOOL)a0;
- (void)setCallScreeningEnabled:(BOOL)a0;
- (void)setSilenceJunkCallingEnabled:(BOOL)a0;
- (void)setSilenceUnknownCallersEnabledForFaceTime:(BOOL)a0;
- (void)setSilenceUnknownCallersEnabledForPhone:(BOOL)a0;
- (void)setValueInUserDefaults:(id)a0 forKey:(id)a1;

@end
