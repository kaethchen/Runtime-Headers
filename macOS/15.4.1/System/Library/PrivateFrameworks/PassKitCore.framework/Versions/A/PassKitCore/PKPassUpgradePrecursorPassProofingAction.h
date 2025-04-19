@class NSString;

@interface PKPassUpgradePrecursorPassProofingAction : PKPassUpgradePrecursorPassAction

@property (readonly, nonatomic) NSString *productIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
