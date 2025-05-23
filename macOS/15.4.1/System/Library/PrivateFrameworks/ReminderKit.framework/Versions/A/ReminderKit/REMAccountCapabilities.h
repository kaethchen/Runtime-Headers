@interface REMAccountCapabilities : NSObject

@property (readonly, nonatomic) BOOL supportsEventKitSync;
@property (readonly, nonatomic) BOOL supportsCloudKitSync;
@property (readonly, nonatomic) BOOL supportsCalDAVNotifications;
@property (readonly, nonatomic) BOOL supportsListSharees;
@property (readonly, nonatomic) BOOL supportsListShareesMutation;
@property (readonly, nonatomic) BOOL supportsMoveAcrossLists;
@property (readonly, nonatomic) BOOL supportsMoveAcrossSharedLists;
@property (readonly, nonatomic) BOOL supportsMultipleDateAlarmsOnRecurrence;
@property (readonly, nonatomic) BOOL supportsSections;
@property (readonly, nonatomic) BOOL supportsDueDateDeltaAlerts;
@property (readonly, nonatomic) long long defaultReminderPriorityLevel;
@property (readonly, nonatomic) BOOL supportsHandoff;
@property (readonly, nonatomic) BOOL supportsReminderActions;
@property (readonly, nonatomic) BOOL supportsCRDTs;
@property (readonly, nonatomic) BOOL supportsAssignments;
@property (readonly, nonatomic) BOOL supportsHashtags;
@property (readonly, nonatomic) BOOL insertsCompletedRecurrentCloneAtTail;
@property (readonly, nonatomic) BOOL supportsCustomSmartLists;
@property (readonly, nonatomic) BOOL supportsPinnedLists;
@property (readonly, nonatomic) BOOL supportsTextStyling;
@property (readonly, nonatomic) BOOL supportsDeletionByTTL;
@property (readonly, nonatomic) BOOL supportsGroceriesList;
@property (readonly, nonatomic) BOOL supportsRecentlyDeletedList;
@property (readonly, nonatomic) BOOL supportsSubtasks;
@property (readonly, nonatomic) BOOL supportsAttachments;
@property (readonly, nonatomic) BOOL supportsListAppearance;
@property (readonly, nonatomic) BOOL supportsGroups;
@property (readonly, nonatomic) BOOL supportsFlagged;
@property (readonly, nonatomic) BOOL supportsPersonTrigger;
@property (readonly, nonatomic) BOOL supportsLocation;
@property (readonly, nonatomic) BOOL supportsHourlyRecurrence;
@property (readonly, nonatomic) BOOL supportsTemplates;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithAccountType:(long long)a0;

@end
