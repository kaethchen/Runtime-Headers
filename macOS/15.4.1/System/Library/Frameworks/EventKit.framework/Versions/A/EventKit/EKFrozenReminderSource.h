@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (id)UUID;
- (int)flags;
- (id)title;
- (BOOL)disabled;
- (id)externalID;
- (id)constraintsName;
- (id)lastSyncEndDate;
- (id)cachedExternalInfoData;
- (id)defaultAlarmOffset;
- (id)delegatedAccountOwnerStoreID;
- (id)lastSyncStartDate;
- (int)managedConfigurationAccountAccess;
- (id)meltedObjectInStore:(id)a0;
- (void)setLastSyncEndDate:(id)a0;
- (void)setLastSyncStartDate:(id)a0;
- (void)setSyncError:(id)a0;
- (long long)sourceTypeRaw;
- (id)syncError;

@end
