@interface HMDTriggerDeletePolicy : HMDTriggerPolicy

+ (BOOL)supportsSecureCoding;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)applyPolicy:(id)a0;

@end
