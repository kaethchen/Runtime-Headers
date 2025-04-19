@class NSDictionary;

@interface SRLanguageConfiguration : NSObject {
    NSDictionary *_supportedLanguageMap;
}

+ (id)configuration;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isSupportedLanguage:(id)a0 deliveryType:(id)a1;
- (void)loadSupportedLanguages:(id)a0;

@end
