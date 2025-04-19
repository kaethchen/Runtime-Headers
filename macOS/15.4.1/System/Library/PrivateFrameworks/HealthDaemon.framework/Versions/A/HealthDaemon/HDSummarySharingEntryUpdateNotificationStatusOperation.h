@class NSUUID, HKSummarySharingEntry, NSDate;

@interface HDSummarySharingEntryUpdateNotificationStatusOperation : HDJournalableOperation

@property (readonly, copy, nonatomic) NSUUID *invitationUUID;
@property (readonly, nonatomic) long long notificationStatus;
@property (readonly, copy, nonatomic) NSDate *dateModified;
@property (readonly, nonatomic) HKSummarySharingEntry *sharingEntry;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInvitationUUID:(id)a0 notificationStatus:(long long)a1 dateModified:(id)a2;
- (BOOL)performWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
