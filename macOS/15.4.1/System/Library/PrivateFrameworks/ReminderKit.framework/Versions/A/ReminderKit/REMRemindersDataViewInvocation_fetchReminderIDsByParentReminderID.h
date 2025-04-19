@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchReminderIDsByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) BOOL includeIncomplete;
@property (readonly, nonatomic) BOOL includeCompleted;
@property (readonly, nonatomic) BOOL isUnsupported;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParentReminderID:(id)a0 includeIncomplete:(BOOL)a1 includeCompleted:(BOOL)a2 isUnsupported:(BOOL)a3;

@end
