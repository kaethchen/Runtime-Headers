@class NSString, NSSet, NSManagedObjectID;

@interface PHSocialGroup : PHObject {
    NSSet *_memberPersonIDs;
    NSSet *_inclusiveAssetIDs;
    NSSet *_exclusiveAssetIDs;
    NSManagedObjectID *_keyAssetID;
}

@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, nonatomic) short socialGroupVerifiedType;
@property (readonly, nonatomic) long long manualOrder;
@property (readonly, nonatomic) long long automaticOrder;
@property (readonly, nonatomic) long long keyAssetPickSource;
@property (readonly, nonatomic) unsigned long long countOfExclusiveAssets;

+ (id)entityKeyMap;
+ (id)fetchSocialGroupsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchSocialGroupsWithOptions:(id)a0;
+ (id)fetchSocialGroupsWithUUIDs:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsSharingComposition;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)nodeValueKeyPathForNodeValueName:(id)a0;
+ (id)nodeValueNameFromPHSocialGroupPropertyName:(id)a0;
+ (id)nodeValueNameFromPropertyName:(id)a0;
+ (id)propertyNameFromNodeValueName:(id)a0;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (id)memberPersonIDs;
- (id)exclusiveAssetIDs;
- (id)exclusiveAssetInternalPredicateWithPeopleCount:(long long)a0 exactCount:(BOOL)a1;
- (id)inclusiveAssetIDs;
- (id)initWithNodeContainer:(id)a0 photoLibrary:(id)a1;
- (id)keyAssetID;

@end
