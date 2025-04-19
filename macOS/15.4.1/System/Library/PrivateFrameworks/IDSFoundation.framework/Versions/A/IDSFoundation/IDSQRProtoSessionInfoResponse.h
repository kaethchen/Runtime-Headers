@class NSMutableArray;

@interface IDSQRProtoSessionInfoResponse : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _lightweightParticipantIdLists;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _peerSubscribedStreamIds;
    struct { unsigned char commandFlags : 1; unsigned char generationCounter : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *peerPublishedStreams;
@property (readonly, nonatomic) unsigned long long peerSubscribedStreamIdsCount;
@property (readonly, nonatomic) unsigned int *peerSubscribedStreamIds;
@property (readonly, nonatomic) unsigned long long lightweightParticipantIdListsCount;
@property (readonly, nonatomic) unsigned long long *lightweightParticipantIdLists;
@property (nonatomic) BOOL hasCommandFlags;
@property (nonatomic) unsigned int commandFlags;
@property (retain, nonatomic) NSMutableArray *joinedParticipants;
@property (retain, nonatomic) NSMutableArray *leftParticipants;
@property (retain, nonatomic) NSMutableArray *updatedParticipants;
@property (nonatomic) BOOL hasGenerationCounter;
@property (nonatomic) unsigned int generationCounter;

+ (Class)joinedParticipantsType;
+ (Class)leftParticipantsType;
+ (Class)peerPublishedStreamsType;
+ (Class)updatedParticipantsType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)peerSubscribedStreamIdsAtIndex:(unsigned long long)a0;
- (void)addJoinedParticipants:(id)a0;
- (void)addLeftParticipants:(id)a0;
- (void)addLightweightParticipantIdList:(unsigned long long)a0;
- (void)addPeerPublishedStreams:(id)a0;
- (void)addPeerSubscribedStreamIds:(unsigned int)a0;
- (void)addUpdatedParticipants:(id)a0;
- (void)clearJoinedParticipants;
- (void)clearLeftParticipants;
- (void)clearLightweightParticipantIdLists;
- (void)clearPeerPublishedStreams;
- (void)clearPeerSubscribedStreamIds;
- (void)clearUpdatedParticipants;
- (id)joinedParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)joinedParticipantsCount;
- (id)leftParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)leftParticipantsCount;
- (unsigned long long)lightweightParticipantIdListAtIndex:(unsigned long long)a0;
- (id)peerPublishedStreamsAtIndex:(unsigned long long)a0;
- (unsigned long long)peerPublishedStreamsCount;
- (void)setLightweightParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;
- (void)setPeerSubscribedStreamIds:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)updatedParticipantsAtIndex:(unsigned long long)a0;
- (unsigned long long)updatedParticipantsCount;

@end
