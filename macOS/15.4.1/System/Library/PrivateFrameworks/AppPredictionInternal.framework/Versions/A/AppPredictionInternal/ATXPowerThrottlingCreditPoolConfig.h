@interface ATXPowerThrottlingCreditPoolConfig : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ maxCredits;
    void /* unknown type, empty encoding */ secondsToReplenishOneCredit;
    void /* unknown type, empty encoding */ loggingSubsystem;
    void /* unknown type, empty encoding */ loggingCategory;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 maxCredits:(long long)a1 secondsToReplenishOneCredit:(long long)a2 loggingSubsystem:(id)a3 loggingCategory:(id)a4;

@end
