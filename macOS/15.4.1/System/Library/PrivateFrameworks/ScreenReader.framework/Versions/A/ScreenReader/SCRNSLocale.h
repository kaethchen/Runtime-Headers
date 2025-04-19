@class NSLocale;

@interface SCRNSLocale : SCRLocaleCommon

@property (nonatomic) unsigned long long characterDirection;
@property (readonly, nonatomic) NSLocale *_locale;

+ (id)currentLocale;
+ (id)autoupdatingCurrentLocale;

- (void).cxx_destruct;
- (id)preferredLanguages;
- (id)preferredLanguage;
- (unsigned long long)characterDirection;
- (id)initWithAutoUpdate:(BOOL)a0;

@end
