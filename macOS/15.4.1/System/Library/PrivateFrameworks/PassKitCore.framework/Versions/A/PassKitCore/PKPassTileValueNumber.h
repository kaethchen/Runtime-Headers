@class NSNumber, NSString;

@interface PKPassTileValueNumber : PKPassTileValue

@property (retain, nonatomic) NSNumber *content;
@property (copy, nonatomic) NSString *currencyCode;
@property (nonatomic) long long numberStyle;

+ (BOOL)supportsSecureCoding;
+ (id)createWithContent:(id)a0 currencyCode:(id)a1 numberStyle:(long long)a2;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedValueWithBundle:(id)a0 privateBundle:(id)a1;
- (id)displayableStringWithPassState:(id)a0 inContext:(long long)a1;

@end
