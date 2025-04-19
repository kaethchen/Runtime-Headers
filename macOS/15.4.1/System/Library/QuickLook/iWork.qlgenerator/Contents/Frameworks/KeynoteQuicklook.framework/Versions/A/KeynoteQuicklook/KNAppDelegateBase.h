@class KNAppPropertiesProvider;

@interface KNAppDelegateBase : TSABaseApplicationDelegate {
    BOOL _cachedBidiIsSupported;
}

@property (class, readonly, nonatomic) KNAppPropertiesProvider *kn_sharedPropertiesProvider;

- (id)init;
- (BOOL)supportsRTL;
- (id)createCompatibilityDelegate;
- (id)defaultHyperlinkURL;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (BOOL)supportsShrinkTextToFit;
- (void)applicationDidFinishLaunching;
- (void)createStringsProviders;
- (id)equationEditorAPDID;
- (BOOL)isValidURLForImportedHyperlink:(id)a0 targetDocumentRoot:(id)a1 forCrossDocumentPaste:(BOOL)a2;
- (void)p_inputMethodsChanged:(id)a0;
- (Class)propertiesProviderClass;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (void)registerDrawableInfoClassMapping;
- (void)registerSOSClassTypeMappings;
- (BOOL)supportsCommentsInMasters;
- (BOOL)supportsFreehandAnimationUI;
- (BOOL)supportsHDRInteractiveCanvases;
- (BOOL)supportsImageGalleryHyperlinks;
- (BOOL)supportsMovieHyperlinks;
- (BOOL)supportsPastingIntoGroups;
- (id)universalPreviewImageNameForDocumentType:(id)a0;

@end
