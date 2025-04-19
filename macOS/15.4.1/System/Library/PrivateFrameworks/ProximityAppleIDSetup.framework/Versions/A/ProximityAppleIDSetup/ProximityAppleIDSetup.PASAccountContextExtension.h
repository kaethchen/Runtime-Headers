@class NSString;

@interface ProximityAppleIDSetup.PASAccountContextExtension : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ requiresCDP;
    void /* unknown type, empty encoding */ requiresManateeRepair;
    void /* unknown type, empty encoding */ requiresFamilyRepair;
    void /* unknown type, empty encoding */ showPrivacyDisclosureOnSourceDevice;
    void /* unknown type, empty encoding */ showPasscodeBiometricsRequestOnTargetDevice;
    void /* unknown type, empty encoding */ flowStepAllSetContext;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
