@class NSString, NSArray, NSMutableArray, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHMomentChangeRequest : PHChangeRequest <PHUpdateChangeRequest>

@property (retain, nonatomic) NSMutableArray *assetSearchEntities;
@property (nonatomic) float aggregationScore;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSArray *localizedLocationNames;
@property (nonatomic) unsigned short processedLocation;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) id<PLChangesForServiceHandling> changesForServiceHandler;
@property (readonly, nonatomic) NSString *changeTypeForSummary;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *clientBundleID;

+ (id)changeRequestForMoment:(id)a0;

- (void).cxx_destruct;
- (void)addAssetSearchEntityWithLabel:(id)a0 identifier:(id)a1 type:(unsigned long long)a2 confidence:(double)a3 dateInterval:(id)a4 synonyms:(id)a5;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;

@end
