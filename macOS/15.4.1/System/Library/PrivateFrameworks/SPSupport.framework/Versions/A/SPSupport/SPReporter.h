@class NSBundle;

@interface SPReporter : NSObject {
    NSBundle *_bundle;
    struct __SecRequirement { } *_fromAppleRequirement;
    struct __SecRequirement { } *_fromMacAppStoreRequirement;
    struct __SecRequirement { } *_fromiOSAppStoreRequirement;
    struct __SecRequirement { } *_fromIdentifiedDeveloperRequirement;
}

+ (id)sharedReporter;
+ (id)reporterBundles;
+ (BOOL)isRunningFromInstaller;
+ (id)reporterBundlesForDataType:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)bundle;
- (id)propertiesDictionary;
- (id)localizedStringForKey:(id)a0;
- (id)codeSigningDictionaryForURL:(struct __CFURL { } *)a0;
- (id)updateDictionary:(id)a0;

@end
