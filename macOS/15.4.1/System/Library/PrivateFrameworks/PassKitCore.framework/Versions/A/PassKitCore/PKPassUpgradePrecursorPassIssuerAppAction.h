@class NSString;

@interface PKPassUpgradePrecursorPassIssuerAppAction : PKPassUpgradePrecursorPassAction

@property (readonly, nonatomic) NSString *appUrl;
@property (readonly, nonatomic) NSString *appIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;

@end
