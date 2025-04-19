@class CKUserIdentity;

@interface HDCloudSyncSharedSummaryValidateOutgoingInvitationOperation : HDCloudSyncOperation {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    CKUserIdentity *_userIdentity;
}

@property (copy, nonatomic) CKUserIdentity *userIdentity;

+ (BOOL)shouldLogAtOperationStart;

- (void).cxx_destruct;
- (void)main;
- (id)initWithConfiguration:(id)a0 cloudState:(id)a1;

@end
