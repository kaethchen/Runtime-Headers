@class NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFVCalendarContentItem : WFGenericFileContentItem <WFContentItemClass>

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
+ (id)stringConversionBehavior;
+ (BOOL)supportedTypeMustBeDeterminedByInstance:(id)a0;

- (BOOL)canGenerateRepresentationForType:(id)a0;
- (id)generateObjectRepresentationsForClass:(Class)a0 options:(id)a1 error:(id *)a2;

@end
