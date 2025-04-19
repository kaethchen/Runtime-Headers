@class NSString, NSDictionary, CLPlacemark, WFFileType, WFObjectType;

@interface WFLocationContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) CLPlacemark *placemark;
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

+ (id)contentCategories;
+ (id)countDescription;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;
+ (long long)tableTemplateSubjectType;

- (BOOL)getListAltText:(id /* block */)a0;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 named:(id)a2 withCompletionHandler:(id /* block */)a3;
- (BOOL)loadsListSubtitleAsynchronously;
- (void)generateFileRepresentation:(id /* block */)a0 options:(id)a1 forType:(id)a2;
- (void)generateObjectRepresentations:(id /* block */)a0 options:(id)a1 forClass:(Class)a2;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (BOOL)getListThumbnail:(id /* block */)a0 forSize:(struct CGSize { double x0; double x1; })a1;
- (void)getMKMapSnapshotImageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 completionHandler:(id /* block */)a2;
- (BOOL)loadsListThumbnailAsynchronously;
- (unsigned long long)preferredDisplayStyle;

@end
