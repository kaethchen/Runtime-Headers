@class NSString, LPImage, NSArray;

@interface LPMapCollectionMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformer, LPLinkMetadataPreviewTransformer, LPLinkMetadataFallbackIconTransformer, LPLinkMetadataBackwardCompatibility>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int numberOfItems;
@property (retain, nonatomic) LPImage *icon;
@property (retain, nonatomic) LPImage *image;
@property (retain, nonatomic) LPImage *darkImage;
@property (copy, nonatomic) NSArray *addresses;
@property (copy, nonatomic) NSString *publisherName;
@property (retain, nonatomic) LPImage *publisherIcon;

+ (BOOL)supportsSecureCoding;
+ (id)keyPathsForValuesAffecting_dummyPropertyForObservation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_resolvedImage;
- (id)_bottomLine;
- (void)_enumerateAsynchronousFields:(id /* block */)a0;
- (BOOL)canGeneratePresentationPropertiesForURL:(id)a0;
- (id)fallbackIconForTransformer:(id)a0;
- (void)populateMetadataForBackwardCompatibility:(id)a0;
- (id)presentationPropertiesForTransformer:(id)a0;
- (id)previewImageForTransformer:(id)a0;
- (id)previewSummaryForTransformer:(id)a0;

@end
