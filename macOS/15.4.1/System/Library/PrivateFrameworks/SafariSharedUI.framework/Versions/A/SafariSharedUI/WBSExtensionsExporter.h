@class NSObject;
@protocol OS_dispatch_queue;

@interface WBSExtensionsExporter : WBSJSONExporter {
    NSObject<OS_dispatch_queue> *_extensionsDataExportQueue;
}

+ (id)dataType;
+ (unsigned long long)schemaVersion;
+ (id)extensionDataWithDisplayName:(id)a0 developerName:(id)a1 composedIdentifier:(id)a2 adamIdentifier:(id)a3 alternatePlatformExtensionBundleIdentifier:(id)a4 alternatePlatformAppBundleIdentifier:(id)a5;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)exportExtensionDictionaries:(id)a0 completionHandler:(id /* block */)a1;

@end
