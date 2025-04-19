@class NSString;

@interface PKPassTileValueDate : PKPassTileValue

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long dateStyle;
@property (nonatomic) long long timeStyle;
@property (nonatomic) BOOL ignoresTimeZone;
@property (nonatomic) BOOL isRelative;

+ (BOOL)supportsSecureCoding;
+ (id)createWithContent:(id)a0 dateStyle:(long long)a1;
+ (id)createWithContent:(id)a0 dateStyle:(long long)a1 timeStyle:(long long)a2;
+ (id)createWithContent:(id)a0 dateStyle:(long long)a1 timeStyle:(long long)a2 ignoresTimeZone:(BOOL)a3 isRelative:(BOOL)a4;
+ (id)createWithContent:(id)a0 timeStyle:(long long)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)_isEqual:(id)a0;
- (BOOL)_setUpWithDictionary:(id)a0;
- (id)createResolvedValueWithBundle:(id)a0 privateBundle:(id)a1;
- (id)displayableStringWithPassState:(id)a0 inContext:(long long)a1;

@end
