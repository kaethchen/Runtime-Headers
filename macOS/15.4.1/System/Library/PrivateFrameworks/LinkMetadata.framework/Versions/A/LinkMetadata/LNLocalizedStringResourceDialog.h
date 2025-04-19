@class NSString, LNStaticDeferredLocalizedString;

@interface LNLocalizedStringResourceDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *fullString;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *supportingString;
@property (readonly, copy, nonatomic) NSString *systemImageName;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFullString:(id)a0 supportingString:(id)a1 systemImageName:(id)a2 localeIdentifier:(id)a3;

@end
