@class NSData, NSMutableArray;

@interface ChannelActivityUpdatePayload : PBCodable <NSCopying> {
    struct { unsigned char updateType : 1; } _has;
}

@property (nonatomic) BOOL hasUpdateType;
@property (nonatomic) int updateType;
@property (retain, nonatomic) NSMutableArray *participantPayloads;
@property (readonly, nonatomic) BOOL hasPadding;
@property (retain, nonatomic) NSData *padding;

+ (Class)participantPayloadType;

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
- (int)StringAsUpdateType:(id)a0;
- (void)addParticipantPayload:(id)a0;
- (void)clearParticipantPayloads;
- (id)participantPayloadAtIndex:(unsigned long long)a0;
- (unsigned long long)participantPayloadsCount;
- (id)updateTypeAsString:(int)a0;

@end
