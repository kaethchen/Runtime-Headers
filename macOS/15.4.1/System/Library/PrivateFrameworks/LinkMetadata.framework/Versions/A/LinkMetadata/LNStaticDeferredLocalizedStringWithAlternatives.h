@class NSDictionary;

@interface LNStaticDeferredLocalizedStringWithAlternatives : LNStaticDeferredLocalizedString

@property (readonly, copy, nonatomic) NSDictionary *alternatives;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)bundleURL;
- (Class)classForKeyedArchiver;
- (id)key;
- (id)defaultValue;
- (id)table;
- (id)initWithKey:(id)a0 defaultValue:(id)a1 table:(id)a2 bundleURL:(id)a3 alternatives:(id)a4;
- (id)initWithLocalizedStringResource:(id)a0 alternatives:(id)a1;
- (id)localizedStringForLocaleIdentifier:(id)a0 kind:(id)a1;

@end
