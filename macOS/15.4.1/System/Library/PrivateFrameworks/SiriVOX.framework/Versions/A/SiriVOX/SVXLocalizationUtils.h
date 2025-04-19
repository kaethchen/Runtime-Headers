@protocol SVXBundleUtilsProtocol;

@interface SVXLocalizationUtils : NSObject {
    id<SVXBundleUtilsProtocol> _bundleUtils;
}

- (id)init;
- (void).cxx_destruct;
- (id)getLocalizedStringWithLanguageCode:(id)a0 gender:(long long)a1 key:(id)a2;
- (id)initWithBundleUtils:(id)a0;

@end
