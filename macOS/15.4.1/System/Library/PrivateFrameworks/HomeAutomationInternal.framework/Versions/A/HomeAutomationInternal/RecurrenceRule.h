@interface RecurrenceRule : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long interval;
@property (nonatomic) long long frequency;
@property (nonatomic) long long weeklyRecurrenceDays;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
