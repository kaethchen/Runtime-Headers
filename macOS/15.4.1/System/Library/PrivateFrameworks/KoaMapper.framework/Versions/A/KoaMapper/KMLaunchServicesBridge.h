@class NSString, KVItemMapper, NSDictionary;

@interface KMLaunchServicesBridge : NSObject <KMProviderDatasetBridge> {
    KVItemMapper *_itemMapper;
    NSDictionary *_additionalFields;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allInstalledAppBundleIdentifiers;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLanguageCode:(id)a0;
- (unsigned short)cascadeItemType;
- (BOOL)enumerateItemsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)originAppId;
- (id)_appEnumerator;
- (BOOL)_checkAppValidity:(id)a0;
- (id)_getOverrideByInfoPlist:(id)a0;

@end
