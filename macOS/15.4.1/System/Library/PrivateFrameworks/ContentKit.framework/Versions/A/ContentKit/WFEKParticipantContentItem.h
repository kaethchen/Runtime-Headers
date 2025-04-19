@class WFParticipant, NSString, NSDictionary, WFFileType, WFObjectType;

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFParticipant *participant;
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
+ (id)contactCoercionHandler;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)emailAddressCoercionHandler;
+ (id)localizedFilterDescriptionWithContext:(id)a0;
+ (id)localizedPluralFilterDescriptionWithContext:(id)a0;
+ (id)localizedPluralTypeDescriptionWithContext:(id)a0;
+ (id)localizedTypeDescriptionWithContext:(id)a0;
+ (id)ownedTypes;
+ (id)possibleRoles;
+ (id)possibleStatuses;
+ (id)possibleTypes;
+ (id)propertyBuilders;
+ (id)stringConversionBehavior;

- (id)type;
- (id)role;
- (id)status;
- (BOOL)isCurrentUser;
- (id)emailAddress;
- (id)defaultSourceForRepresentation:(id)a0;
- (BOOL)getListSubtitle:(id /* block */)a0;

@end
