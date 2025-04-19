@interface SKProductSubscriptionPeriod : NSObject {
    id _internal;
}

@property (readonly, nonatomic) unsigned long long numberOfUnits;
@property (readonly, nonatomic) unsigned long long unit;

- (id)init;
- (void).cxx_destruct;
- (id)toISO8601String;
- (void)_setNumberOfUnits:(unsigned long long)a0;
- (void)_setUnit:(unsigned long long)a0;
- (id)initWithISO8601String:(id)a0;

@end
