@class NSArray, NSDictionary, NSSet, CRKASMRosterProviderEnvironment;
@protocol CRKClassKitCurrentUser;

@interface CRKASMWorldBuildOperation : CATOperation

@property (readonly, nonatomic) CRKASMRosterProviderEnvironment *environment;
@property (retain, nonatomic) id<CRKClassKitCurrentUser> classKitCurrentUser;
@property (retain, nonatomic) NSArray *classKitClasses;
@property (copy, nonatomic) NSDictionary *classKitLocationsByLocationID;
@property (copy, nonatomic) NSSet *manageableLocationIDs;
@property (copy, nonatomic) NSDictionary *classKitPersonsByClassID;
@property (copy, nonatomic) NSDictionary *trustedClassKitPersonsByClassID;

+ (id)makeErrorWithErrorsByObjectID:(id)a0;

- (void).cxx_destruct;
- (void)finish;
- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithEnvironment:(id)a0;
- (void)buildAllClassKitPersonsByClassID;
- (void)buildClassKitClasses;
- (void)buildClassKitLocationsByLocationID;
- (void)buildCurrentClassKitUser;
- (void)buildManageableLocationIDs;
- (void)checkAccountEligibility;
- (id)compileResult;
- (void)finishWithEmptyResultObject;
- (void)housekeepKeychain;
- (void)housekeepKeychainWithRoster:(id)a0;
- (id)makeHousekeeperWithRoster:(id)a0;
- (id)rosterRequirements;

@end
