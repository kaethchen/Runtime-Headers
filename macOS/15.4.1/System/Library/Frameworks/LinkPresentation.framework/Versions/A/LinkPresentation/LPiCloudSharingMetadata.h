@class NSString, LPImage, NSDictionary;

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility, LPLinkMetadataSharedObjectTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *applicationBundleIdenfier;
@property (copy, nonatomic) NSString *application;
@property (copy, nonatomic) NSString *kind;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPImage *thumbnail;
@property (retain, nonatomic) NSDictionary *encodedTokens;

+ (BOOL)supportsSecureCoding;
+ (id)_applicationNameMap;
+ (id)_bundleIdentifierMap;
+ (id)extractApplicationFromURL:(id)a0;
+ (id)extractApplicationNameFromURL:(id)a0;
+ (id)extractKindFromURL:(id)a0;
+ (id)extractTitleFromURL:(id)a0;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)computeThumbnail;
- (id)sharedObjectIconForTransformer:(id)a0;
- (id)_bottomLeadingCaptionStringWithApplicationName:(id)a0 originalURL:(id)a1;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (id)_topLeadingCaptionStringWithApplicationName:(id)a0 originalURL:(id)a1;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)computeIcon;
- (id)fallbackIconForTransformer:(id)a0;
- (id)firstPartyAppIcon;
- (BOOL)isFreeformBoardLinkWithURL:(id)a0;
- (BOOL)isSafariTabGroupLinkWithURL:(id)a0;
- (id)localizedApplicationNameWithURL:(id)a0;
- (id)localizedKind;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;
- (id)sharedObjectInformationForTransformer:(id)a0;
- (BOOL)sharedObjectPrefersIconAsImageForTransformer:(id)a0;
- (id)sharedObjectSubtitleForTransformer:(id)a0;
- (id)sharedObjectTitleForTransformer:(id)a0;

@end
