@interface AWDDEDBugSessionEnded : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char sessionState : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSessionState;
@property (nonatomic) int sessionState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsSessionState:(id)a0;
- (id)sessionStateAsString:(int)a0;

@end
