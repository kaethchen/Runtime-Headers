@protocol RTManagedConfigurationObserver;

@interface RTManagedConfiguration : NSObject

@property (weak, nonatomic) id<RTManagedConfigurationObserver> delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void).cxx_destruct;
- (BOOL)effectiveBoolValueForSetting:(id)a0;
- (BOOL)isDiagnosticsAndUsageAllowed;
- (BOOL)isFindMyCarAllowed;
- (BOOL)isHealthDataSubmissionAllowed;

@end
