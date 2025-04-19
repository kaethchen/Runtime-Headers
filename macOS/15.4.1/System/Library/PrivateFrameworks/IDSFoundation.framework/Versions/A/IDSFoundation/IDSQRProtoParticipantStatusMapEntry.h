@interface IDSQRProtoParticipantStatusMapEntry : PBCodable <NSCopying> {
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _participantIds;
    struct { unsigned char participantStatus : 1; } _has;
}

@property (nonatomic) BOOL hasParticipantStatus;
@property (nonatomic) int participantStatus;
@property (readonly, nonatomic) unsigned long long participantIdsCount;
@property (readonly, nonatomic) unsigned long long *participantIds;

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
- (int)StringAsParticipantStatus:(id)a0;
- (void)addParticipantIds:(unsigned long long)a0;
- (void)clearParticipantIds;
- (unsigned long long)participantIdsAtIndex:(unsigned long long)a0;
- (id)participantStatusAsString:(int)a0;
- (void)setParticipantIds:(unsigned long long *)a0 count:(unsigned long long)a1;

@end
