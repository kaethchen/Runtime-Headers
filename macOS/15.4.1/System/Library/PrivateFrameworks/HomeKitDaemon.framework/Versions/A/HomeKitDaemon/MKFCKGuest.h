@class NSDate, NSString, NSUUID, HAPPairingIdentity, CKRecordID, NSArray, CKDeviceToDeviceShareInvitationToken, NSSet, MKFCKHome;

@interface MKFCKGuest : MKFCKHomeObject

@property (copy, nonatomic) NSString *accountHandle;
@property (nonatomic) long long announceAccessLevel;
@property (nonatomic) long long camerasAccessLevel;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSString *homeAccessCode;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSString *idsMergeIdentifier;
@property (copy, nonatomic) NSUUID *modelID;
@property (retain, nonatomic) HAPPairingIdentity *pairingIdentity;
@property (nonatomic) long long privilege;
@property (nonatomic) BOOL remoteAccessAllowed;
@property (retain, nonatomic) CKRecordID *reverseShareID;
@property (retain, nonatomic) CKDeviceToDeviceShareInvitationToken *reverseShareToken;
@property (nonatomic) long long uniqueIDForAccessories;
@property (retain, nonatomic) NSArray *weekDayScheduleRules;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) NSArray *yearDayScheduleRules;
@property (retain, nonatomic) NSSet *allowedAccessories;
@property (retain, nonatomic) NSSet *automations;
@property (retain, nonatomic) MKFCKHome *home;

+ (id)fetchRequest;
+ (id)_dictionaryRepresentationFromWeekDayScheduleRules:(id)a0 cloudWeekDayScheduleRulesDictionary:(id)a1;
+ (id)_dictionaryRepresentationFromYearDayScheduleRules:(id)a0 cloudYearDayScheduleRulesDictionary:(id)a1;
+ (BOOL)_importWeekDayScheduleRulesIntoLocalModel:(id)a0 fromCloudModel:(id)a1 localRelationship:(id)a2 cloudAttributeName:(id)a3 parentRelationshipName:(id)a4 context:(id)a5;
+ (BOOL)_importYearDayScheduleRulesIntoLocalModel:(id)a0 fromCloudModel:(id)a1 localRelationship:(id)a2 cloudAttributeName:(id)a3 parentRelationshipName:(id)a4 context:(id)a5;

- (BOOL)_exportAllowedAccessoriesRelationshipFromGuestLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportGuestAccessCodeFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportWeekDaySchedulesFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_exportYearDaySchedulesFromLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importAllowedAccessoriesRelationshipIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importGuestAccessCodeIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importWeekDayScheduleRulesIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)_importYearDayScheduleRulesIntoLocalModel:(id)a0 context:(id)a1;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
