@class NSString;

@interface PKPassTileValueForeignReference : PKPassTileValue

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long foreignReferenceType;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedValueWithBundle:(id)a0 privateBundle:(id)a1;
- (id)displayableStringWithPassState:(id)a0 inContext:(long long)a1;

@end
