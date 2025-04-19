@class NSString, NSDictionary, WFFileType, INCurrencyAmount, WFObjectType;

@interface WFCurrencyAmountContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) INCurrencyAmount *currencyAmount;
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

+ (id)coercions;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)decimalNumberCoercionHandler;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)numberCoercionHandler;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)propertyBuilders;
+ (id)quantityCoercionHandler;
+ (id)stringCoercionHandler;

- (BOOL)getListSubtitle:(id /* block */)a0;

@end
