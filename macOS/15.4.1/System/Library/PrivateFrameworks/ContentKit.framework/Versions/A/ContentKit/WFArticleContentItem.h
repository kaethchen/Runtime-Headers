@class NSString, NSDictionary, WFFileType, WFArticle, WFObjectType;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFArticle *article;
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

+ (id)URLCoercionHandler;
+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)dateCoercionHandler;
+ (id)fileWithHTML:(id)a0 named:(id)a1;
+ (id)htmlCoercionHandler;
+ (id)imageCoercionHandler;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)stringCoercionHandler;
+ (id)stringConversionBehavior;

- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;
- (id)htmlRepresentation;

@end
