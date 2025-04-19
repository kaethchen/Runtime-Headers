@interface Email.EMGenerativeModelsAvailability : NSObject {
    void /* unknown type, empty encoding */ availability;
    void /* unknown type, empty encoding */ availabilityState;
    void /* unknown type, empty encoding */ availabilityNotification;
}

@property (nonatomic) void /* unknown type, empty encoding */ feature;

+ (BOOL)isFeatureAvailable:(long long)a0;
+ (BOOL)isFeaturePolicyLimited:(long long)a0;
+ (BOOL)isFeatureRestricted:(long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
