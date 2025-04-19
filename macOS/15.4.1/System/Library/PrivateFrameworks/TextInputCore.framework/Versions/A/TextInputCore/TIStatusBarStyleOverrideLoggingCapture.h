@interface TIStatusBarStyleOverrideLoggingCapture : NSObject

+ (long long *)_loggingCaptureOverrideCountPtr;
+ (long long)_decrementLoggingCaptureOverride;
+ (long long)_incrementLoggingCaptureOverride;
+ (void)acquireLoggingCaptureOverride;
+ (void)releaseLoggingCaptureOverride;

- (void)dealloc;
- (id)init;

@end
