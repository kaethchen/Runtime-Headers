@class NSArray, NSObject;
@protocol OS_os_log;

@interface DEDDiagnosticCollector : NSObject

@property (retain) NSObject<OS_os_log> *log;
@property (retain) NSArray *cachedExtensions;
@property unsigned long long collectionTimeout;

- (id)init;
- (void).cxx_destruct;
- (id)extensionForIdentifier:(id)a0;
- (id)extensionManager;
- (id)_combineParametersWithParameters:(id)a0 extension:(id)a1 identifier:(id)a2;
- (id)availableDiagnosticExtensions;
- (void)cleanupItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;
- (id)collectAnnotatedGroupWithIdentifier:(id)a0 parameters:(id)a1;
- (id)collectItemsWithIdentifier:(id)a0 parameters:(id)a1;
- (BOOL)isDiagnosticExtensionAvailable;
- (void)loadExtensionTextDataInExtension:(id)a0 localization:(id)a1;
- (void)prepareItemsWithDeferredExtensionInfo:(id)a0;
- (void)prepareItemsWithIdentifier:(id)a0 parameters:(id)a1 session:(id)a2;

@end
