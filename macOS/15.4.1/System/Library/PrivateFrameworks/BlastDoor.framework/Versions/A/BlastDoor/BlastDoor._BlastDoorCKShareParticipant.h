@interface BlastDoor._BlastDoorCKShareParticipant : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ participantID;
    void /* unknown type, empty encoding */ inviterID;
    void /* unknown type, empty encoding */ userIdentity;
    void /* unknown type, empty encoding */ isCurrentUser;
    void /* unknown type, empty encoding */ isOrgAdminUser;
    void /* unknown type, empty encoding */ role;
    void /* unknown type, empty encoding */ acceptanceStatus;
    void /* unknown type, empty encoding */ permission;
    void /* unknown type, empty encoding */ originalParticipantRole;
    void /* unknown type, empty encoding */ originalAcceptanceStatus;
    void /* unknown type, empty encoding */ originalPermission;
    void /* unknown type, empty encoding */ protectionInfo;
    void /* unknown type, empty encoding */ encryptedPersonalInfo;
    void /* unknown type, empty encoding */ createdInProcess;
    void /* unknown type, empty encoding */ acceptedInProcess;
    void /* unknown type, empty encoding */ invitationToken;
    void /* unknown type, empty encoding */ protectionInfoPublicKey;
    void /* unknown type, empty encoding */ wantsNewInvitationToken;
    void /* unknown type, empty encoding */ isAnonymousInvitedParticipant;
    void /* unknown type, empty encoding */ invitationTokenStatus;
    void /* unknown type, empty encoding */ ParticipantIDKey;
    void /* unknown type, empty encoding */ InviterIDKey;
    void /* unknown type, empty encoding */ UserIdentityKey;
    void /* unknown type, empty encoding */ IsCurrentUserKey;
    void /* unknown type, empty encoding */ IsOrgAdminUserKey;
    void /* unknown type, empty encoding */ AcceptanceStatusKey;
    void /* unknown type, empty encoding */ RoleKey;
    void /* unknown type, empty encoding */ PermissionKey;
    void /* unknown type, empty encoding */ OriginalParticipantRoleKey;
    void /* unknown type, empty encoding */ OriginalAcceptanceStatusKey;
    void /* unknown type, empty encoding */ OriginalPermissionKey;
    void /* unknown type, empty encoding */ ProtectionInfoKey;
    void /* unknown type, empty encoding */ EncryptedPersonalInfoKey;
    void /* unknown type, empty encoding */ CreatedInProcessKey;
    void /* unknown type, empty encoding */ AcceptedInProcessKey;
    void /* unknown type, empty encoding */ DeviceToDeviceShareInvitationTokenKey;
    void /* unknown type, empty encoding */ ProtectionInfoPublicIdentityKey;
    void /* unknown type, empty encoding */ WantsNewInvitationTokenKey;
    void /* unknown type, empty encoding */ MutableInvitationTokenStatus;
    void /* unknown type, empty encoding */ IsAnonymousInvitedParticipant;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
