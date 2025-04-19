@interface PKPassUpgradePrecursorPassGenericReprovisionAction : PKPassUpgradePrecursorPassAction

@property (readonly, nonatomic) unsigned long long subtype;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
