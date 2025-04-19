@class NSString, AFLocalization;

@interface SVXBundleUtils : NSObject <SVXBundleUtilsProtocol> {
    AFLocalization *_afLocalization;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLocalization:(id)a0;
- (id)_getSystemFrameworkWithName:(id)a0;
- (id)getLocalizedStringWithBundle:(id)a0 table:(id)a1 key:(id)a2 languageCode:(id)a3 gender:(long long)a4;
- (id)getSiriVOXFramework;

@end
