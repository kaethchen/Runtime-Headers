@interface IDSQRProtoParticipantUpdateIndication : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _participantIdLists;
    struct { unsigned char txnId : 1; unsigned char operationFlags : 1; unsigned char sessionStateCounter : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long participantIdListsCount;
@property (readonly, nonatomic) unsigned long long *participantIdLists;
@property (nonatomic) BOOL hasOperationFlags;
@property (nonatomic) unsigned int operationFlags;
@property (nonatomic) BOOL hasTxnId;
@property (nonatomic) unsigned long long txnId;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addParticipantIdList:(unsigned long long)a0;
- (void)clearParticipantIdLists;
- (unsigned long long)participantIdListAtIndex:(unsigned long long)a0;
- (void)setParticipantIdLists:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
