@interface ATXLocationVisitDuetEvent : ATXDuetEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)identifier;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCurrentContextStoreValues:(id)a0;
- (id)initWithLocationOfInterestIdentifier:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
