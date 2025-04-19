@class NSString;

@interface AuthenticationServicesCore.ASProgressiveBackoffManager : SwiftNativeNSObject {
    void /* unknown type, empty encoding */ numberOfOperationsBeforeTriggeringBackoff;
    void /* unknown type, empty encoding */ minimumCooldownDuration;
    void /* unknown type, empty encoding */ contexts;
}

- (id)init;
- (id)initWithNumberOfOperationsBeforeTriggeringBackoff:(long long)a0 minimumCooldownDurationSeconds:(double)a1;
- (void)performAfterBackoffForContext:(NSString *)a0 completionHandler:(void (^)(void))a1;

@end
