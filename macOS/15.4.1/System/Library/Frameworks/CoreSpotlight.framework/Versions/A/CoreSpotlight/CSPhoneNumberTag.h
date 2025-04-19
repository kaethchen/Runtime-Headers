@interface CSPhoneNumberTag : CSExternalAnalysisTag <CSCoderEncoder>

@property (readonly, nonatomic) long long countryCodeValue;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCSCoder:(id)a0;
- (id)initWithPhoneNumber:(id)a0 synonyms:(id)a1 countryCode:(long long)a2 confidence:(double)a3;

@end
