@class NSData, NSString, CKDPShareAccessBlockedRequesters, CKDPProtectionInfoKeysToRemove, CKDPShareAccessRequesters, CKDPCryptoRequirementsSigningKey, CKDPShareIdentifier, CKDPProtectionInfo, NSMutableArray;

@interface CKDPShare : PBCodable <NSCopying> {
    struct { unsigned char participantSelfRemovalBehavior : 1; unsigned char publicAccess : 1; unsigned char publisherModelType : 1; unsigned char allowAnyoneToResolveShare : 1; unsigned char anonymousPublicAccess : 1; unsigned char denyAccessRequests : 1; unsigned char publisherModel : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasShareId;
@property (retain, nonatomic) CKDPShareIdentifier *shareId;
@property (readonly, nonatomic) BOOL hasEtag;
@property (retain, nonatomic) NSString *etag;
@property (nonatomic) BOOL hasPublicAccess;
@property (nonatomic) int publicAccess;
@property (readonly, nonatomic) BOOL hasInvitedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *invitedPcs;
@property (readonly, nonatomic) BOOL hasSelfAddedPcs;
@property (retain, nonatomic) CKDPProtectionInfo *selfAddedPcs;
@property (retain, nonatomic) NSMutableArray *participants;
@property (readonly, nonatomic) BOOL hasShortTokenRoutingKey;
@property (retain, nonatomic) NSString *shortTokenRoutingKey;
@property (retain, nonatomic) NSMutableArray *potentialMatchs;
@property (retain, nonatomic) NSMutableArray *invitedKeyToRemoves;
@property (nonatomic) BOOL hasPublisherModel;
@property (nonatomic) BOOL publisherModel;
@property (nonatomic) BOOL hasAnonymousPublicAccess;
@property (nonatomic) BOOL anonymousPublicAccess;
@property (readonly, nonatomic) BOOL hasDisplayedHostname;
@property (retain, nonatomic) NSString *displayedHostname;
@property (nonatomic) BOOL hasPublisherModelType;
@property (nonatomic) int publisherModelType;
@property (nonatomic) BOOL hasParticipantSelfRemovalBehavior;
@property (nonatomic) int participantSelfRemovalBehavior;
@property (nonatomic) BOOL hasDenyAccessRequests;
@property (nonatomic) BOOL denyAccessRequests;
@property (readonly, nonatomic) BOOL hasRequestingAccess;
@property (retain, nonatomic) CKDPShareAccessRequesters *requestingAccess;
@property (readonly, nonatomic) BOOL hasBlockedAccess;
@property (retain, nonatomic) CKDPShareAccessBlockedRequesters *blockedAccess;
@property (readonly, nonatomic) BOOL hasCryptoRequirementsSigningKey;
@property (retain, nonatomic) CKDPCryptoRequirementsSigningKey *cryptoRequirementsSigningKey;
@property (nonatomic) BOOL hasAllowAnyoneToResolveShare;
@property (nonatomic) BOOL allowAnyoneToResolveShare;
@property (readonly, nonatomic) BOOL hasInvitedPcsKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *invitedPcsKeysToRemove;
@property (readonly, nonatomic) BOOL hasSelfAddedPcsKeysToRemove;
@property (retain, nonatomic) CKDPProtectionInfoKeysToRemove *selfAddedPcsKeysToRemove;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (retain, nonatomic) NSData *shortTokenHash;
@property (readonly, nonatomic) BOOL hasOrigin;
@property (retain, nonatomic) NSString *origin;

+ (Class)participantType;
+ (Class)invitedKeyToRemoveType;
+ (Class)potentialMatchType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)addParticipant:(id)a0;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearParticipants;
- (unsigned long long)participantsCount;
- (int)StringAsPublicAccess:(id)a0;
- (int)StringAsParticipantSelfRemovalBehavior:(id)a0;
- (int)StringAsPublisherModelType:(id)a0;
- (id)_publicAccessCKLogValue;
- (void)addInvitedKeyToRemove:(id)a0;
- (void)addPotentialMatch:(id)a0;
- (void)clearInvitedKeyToRemoves;
- (void)clearPotentialMatchs;
- (id)invitedKeyToRemoveAtIndex:(unsigned long long)a0;
- (unsigned long long)invitedKeyToRemovesCount;
- (id)participantAtIndex:(unsigned long long)a0;
- (id)participantSelfRemovalBehaviorAsString:(int)a0;
- (id)potentialMatchAtIndex:(unsigned long long)a0;
- (unsigned long long)potentialMatchsCount;
- (id)publicAccessAsString:(int)a0;
- (id)publisherModelTypeAsString:(int)a0;

@end
