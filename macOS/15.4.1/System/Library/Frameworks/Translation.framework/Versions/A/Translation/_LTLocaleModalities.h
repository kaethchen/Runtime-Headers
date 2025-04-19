@class NSDictionary;

@interface _LTLocaleModalities : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *modalitiesPerLocale;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithModalitiesPerLocale:(id)a0;
- (id)initWithSupportedLocales:(id)a0 asrLocales:(id)a1 ttsLocales:(id)a2;
- (BOOL)locale:(id)a0 supportsModality:(unsigned long long)a1;
- (unsigned long long)modalitiesForLocale:(id)a0;

@end
