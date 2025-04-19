@class NSString, NSDictionary, WFImage, CLLocation, WFFileType, WFObjectType;

@interface WFImageContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) BOOL imageIsAnimated;
@property (nonatomic) BOOL isScreenshot;
@property (readonly, nonatomic) NSDictionary *metadataForSerialization;
@property (readonly, nonatomic) NSDictionary *additionalRepresentationsForSerialization;
@property (readonly, nonatomic) BOOL includesFileRepresentationInSerializedItem;
@property (readonly, nonatomic) BOOL hasStringOutput;
@property (readonly, nonatomic) WFFileType *preferredFileType;
@property (readonly, nonatomic) WFObjectType *preferredObjectType;
@property (readonly, nonatomic) BOOL cachesSupportedTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)supportsSecureCoding;
+ (id)imageTypes;
+ (id)itemWithFile:(id)a0 preferredFileType:(id)a1;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)itemWithImage:(id)a0 named:(id)a1 preferredFileType:(id)a2;
+ (id)itemWithSerializedItem:(id)a0 forType:(id)a1 named:(id)a2 attributionSet:(id)a3 cachingIdentifier:(id)a4;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedPasteboardTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)height;
- (id)width;
- (id)orientation;
- (id)metadata;
- (id)model;
- (id)make;
- (BOOL)isContent;
- (id)imageFile;
- (BOOL)getListAltText:(id /* block */)a0;
- (BOOL)loadsListSubtitleAsynchronously;
- (BOOL)canGenerateRepresentationForType:(id)a0;
- (void)copyStateToItem:(id)a0;
- (id)dateTaken;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (id)generateFileRepresentationForType:(id)a0 options:(id)a1 error:(id *)a2;
- (id)generateImageFileForType:(id)a0 includingMetadata:(BOOL)a1 compressionQuality:(id)a2 error:(id *)a3;
- (id)generateObjectRepresentationForClass:(Class)a0 options:(id)a1 error:(id *)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)isObjectBacked;
- (BOOL)loadsListAltTextAsynchronously;
- (BOOL)loadsListThumbnailAsynchronously;

@end
