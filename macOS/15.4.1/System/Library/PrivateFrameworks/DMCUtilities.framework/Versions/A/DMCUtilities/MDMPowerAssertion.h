@class NSDate;

@interface MDMPowerAssertion : DMCPowerAssertion

@property (readonly, nonatomic) NSDate *creationDate;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;

@end
