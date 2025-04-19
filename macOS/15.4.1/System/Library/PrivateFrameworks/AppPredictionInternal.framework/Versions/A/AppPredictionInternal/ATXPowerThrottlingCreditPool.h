@interface ATXPowerThrottlingCreditPool : NSObject {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ queue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)consumeCredits:(long long)a0 toRun:(id /* block */)a1;

@end
