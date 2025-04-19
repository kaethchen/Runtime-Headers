@interface EXEnumerator : NSEnumerator

+ (id)extensionEnumerator;
+ (id)extensionPointDefinitionEnumerator;
+ (id)extensionPointDefinitionEnumeratorWithSDKDictionary:(id)a0;
+ (id)config;
+ (id)_extensionLiveEnumerator;
+ (id)_extensionPointLiveEnumerator;
+ (id)extensionCacheFileURLs;
+ (id)extensionInstallDirectoryURLs;
+ (id)extensionPointCacheFileURLs;
+ (id)extensionPointDefinitionDirectoryURLs;
+ (id)extensionURLEnumerator;

@end
