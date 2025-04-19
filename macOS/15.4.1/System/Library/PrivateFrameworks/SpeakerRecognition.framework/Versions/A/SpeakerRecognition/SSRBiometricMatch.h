@interface SSRBiometricMatch : NSObject

+ (id)sharedInstance;

- (unsigned long long)getLastBiometricMatchForVoiceTriggerTimeStamp:(unsigned long long)a0;

@end
