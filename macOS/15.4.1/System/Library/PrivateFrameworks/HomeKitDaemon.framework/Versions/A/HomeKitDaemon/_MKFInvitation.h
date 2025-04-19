@class NSUUID, NSDate, NSArray, NSString, NSSet, MKFInvitationDatabaseID, Protocol, NSNumber;

@interface _MKFInvitation : _MKFModel <MKFInvitation, MKFInvitationPrivateExtensions>

@property (class, readonly, copy, nonatomic) Protocol *backingModelProtocol;

@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (retain, nonatomic) NSSet *weekDayScheduleRules_;
@property (retain, nonatomic) NSSet *yearDayScheduleRules_;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (copy, nonatomic) NSNumber *invitationState;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (readonly, retain, nonatomic) NSArray *weekDayScheduleRules;
@property (readonly, retain, nonatomic) NSArray *yearDayScheduleRules;
@property (readonly, copy, nonatomic) MKFInvitationDatabaseID *databaseID;
@property (readonly, copy, nonatomic) NSUUID *modelID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchRequest;

- (id)restrictedGuestSchedule;
- (void)addWeekDayScheduleRulesObject:(id)a0;
- (void)addYearDayScheduleRulesObject:(id)a0;
- (id)castIfInvitation;
- (id)findWeekDayScheduleRulesRelationWithModelID:(id)a0;
- (id)findYearDayScheduleRulesRelationWithModelID:(id)a0;
- (id)materializeOrCreateWeekDayScheduleRulesRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (id)materializeOrCreateYearDayScheduleRulesRelationWithModelID:(id)a0 createdNew:(BOOL *)a1;
- (BOOL)populateWorkingStoreFromRestrictedGuestSchedule:(id)a0;
- (void)removeWeekDayScheduleRulesObject:(id)a0;
- (void)removeYearDayScheduleRulesObject:(id)a0;

@end
