@class LACPasscodeHelper, LACBiometryHelper;
@protocol LACOnenessSessionMonitoring;

@interface LACEnvironmentDependencies : NSObject

@property (retain, nonatomic) LACBiometryHelper *biometryHelper;
@property (retain, nonatomic) id<LACOnenessSessionMonitoring> onenessSessionMonitor;
@property (retain, nonatomic) LACPasscodeHelper *passcodeHelper;

- (void).cxx_destruct;

@end
