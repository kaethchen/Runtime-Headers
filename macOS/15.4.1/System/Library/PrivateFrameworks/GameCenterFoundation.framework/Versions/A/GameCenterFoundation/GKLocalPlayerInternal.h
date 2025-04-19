@class NSString;

@interface GKLocalPlayerInternal : GKFriendPlayerInternal {
    NSString *_accountName;
    unsigned short _numberOfRequests;
    unsigned short _numberOfTurns;
    unsigned short _numberOfChallenges;
    BOOL allowChallengeFriendInvites;
    BOOL allowMultiplayerFriendInvites;
    BOOL _allowChallengeFriendInvites;
    BOOL _allowMultiplayerFriendInvites;
}

@property unsigned long long loginStatus;

+ (BOOL)supportsSecureCoding;
+ (id)minimalInternalFromSourcePlayer:(id)a0;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)accountName;
- (void)setAccountName:(id)a0;
- (BOOL)isUnderage;
- (unsigned short)numberOfRequests;
- (void)setNumberOfRequests:(unsigned short)a0;
- (BOOL)hasAcknowledgedLatestGDPR;
- (id)minimalInternal;
- (void)setAllowChallengeFriendInvites:(BOOL)a0;
- (BOOL)allowChallengeFriendInvites;
- (BOOL)allowMultiplayerFriendInvites;
- (int)defaultFamiliarity;
- (int)globalFriendListAccess;
- (BOOL)isDefaultContactsIntegrationConsent;
- (BOOL)isDefaultNickname;
- (BOOL)isDefaultPrivacyVisibility;
- (BOOL)isFindable;
- (BOOL)isFriend;
- (BOOL)isLocalPlayer;
- (BOOL)isPhotoPending;
- (BOOL)isPurpleBuddyAccount;
- (unsigned short)numberOfChallenges;
- (unsigned short)numberOfTurns;
- (void)setAllowMultiplayerFriendInvites:(BOOL)a0;
- (void)setDefaultContactsIntegrationConsent:(BOOL)a0;
- (void)setDefaultNickname:(BOOL)a0;
- (void)setDefaultPrivacyVisibility:(BOOL)a0;
- (void)setFindable:(BOOL)a0;
- (void)setGlobalFriendListAccess:(int)a0;
- (void)setNumberOfChallenges:(unsigned short)a0;
- (void)setNumberOfTurns:(unsigned short)a0;
- (void)setPhotoPending:(BOOL)a0;
- (void)setPurpleBuddyAccount:(BOOL)a0;
- (void)setUnderage:(BOOL)a0;

@end
