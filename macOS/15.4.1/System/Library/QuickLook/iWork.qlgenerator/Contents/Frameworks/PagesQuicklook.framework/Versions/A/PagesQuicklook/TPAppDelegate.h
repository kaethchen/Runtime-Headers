@class TPAppPropertiesProvider;

@interface TPAppDelegate : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) TPAppPropertiesProvider *tp_sharedPropertiesProvider;

+ (id)defaultFontForNewBasicDocumentsFontName;
+ (double)defaultFontForNewBasicDocumentsPointSize;

- (void)dealloc;
- (id)init;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (BOOL)tableHeaderInspectorShowsRepeatHeaderRowsSwitch;
- (BOOL)textInspectorShowsMoreSubpane;
- (void)createStringsProviders;
- (id)equationEditorAPDID;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (void)registerSOSClassTypeMappings;
- (id)universalPreviewImageNameForDocumentType:(id)a0;
- (BOOL)imageGalleryCaptionsUsePlaceholderText;
- (BOOL)supportsAutosizingTextboxes;
- (BOOL)supportsLinkedTextBoxes;

@end
