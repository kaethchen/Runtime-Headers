@class STCoreUser, NSUUID, NSString, NSDate, NSNumber, STFamilyOrganization;

@interface STAskForTimeRequestResponse : NSManagedObject

@property (retain, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSNumber *timeRequested;
@property (nonatomic) long long usageType;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *requestedApplicationBundleIdentifier;
@property (copy, nonatomic) NSString *requestedCategoryIdentifier;
@property (copy, nonatomic) NSString *requestedWebDomain;
@property (retain, nonatomic) STCoreUser *requestingUser;
@property (retain, nonatomic) NSDate *requestTimeStamp;
@property (retain, nonatomic) NSNumber *amountGranted;
@property (retain, nonatomic) NSNumber *answer;
@property (retain, nonatomic) NSDate *responseTimeStamp;
@property (retain, nonatomic) STCoreUser *respondingUser;
@property (retain, nonatomic) STFamilyOrganization *familyOrganization;

+ (id)fetchRequest;
+ (id)_fetchPredicateForAskForTimeRequest:(id)a0 requestingUserDSID:(id)a1;
+ (id)fetchAskForTimeRequest:(id)a0 fromUser:(id)a1 inContext:(id)a2 error:(id *)a3;
+ (id)upsertAskForTimeRequest:(id)a0 fromUser:(id)a1 inContext:(id)a2 error:(id *)a3;

- (void)awakeFromInsert;
- (BOOL)validateForDelete:(id *)a0;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (BOOL)_validateRequestingApplication:(id)a0;
- (BOOL)_validateFieldsOfRequesterResponder:(id)a0;

@end
