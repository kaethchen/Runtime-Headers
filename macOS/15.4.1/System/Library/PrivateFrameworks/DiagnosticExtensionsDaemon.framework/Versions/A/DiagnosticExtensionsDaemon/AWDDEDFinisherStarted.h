@interface AWDDEDFinisherStarted : PBCodable <NSCopying> {
    struct { unsigned char numbytes : 1; unsigned char numfiles : 1; unsigned char timestamp : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNumfiles;
@property (nonatomic) unsigned long long numfiles;
@property (nonatomic) BOOL hasNumbytes;
@property (nonatomic) unsigned long long numbytes;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;

@end
