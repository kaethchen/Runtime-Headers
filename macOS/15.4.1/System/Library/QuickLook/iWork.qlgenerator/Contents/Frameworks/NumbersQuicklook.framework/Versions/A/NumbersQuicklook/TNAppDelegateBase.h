@class TNAppPropertiesProvider;

@interface TNAppDelegateBase : TSABaseApplicationDelegate

@property (class, readonly, nonatomic) TNAppPropertiesProvider *tn_sharedPropertiesProvider;

- (id)init;
- (void)applicationDidFinishLaunching:(id)a0;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (void)createStringsProviders;
- (id)equationEditorAPDID;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (void)registerClassTypeMappings;
- (void)registerSOSClassTypeMappings;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (void)configureSharedCode;
- (Class)documentViewControllerClass;

@end
