@interface AWDCoreRoutineModelAvailability : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char availability : 1; unsigned char precisionRecall : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasAvailability;
@property (nonatomic) int availability;
@property (nonatomic) BOOL hasPrecisionRecall;
@property (nonatomic) unsigned int precisionRecall;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
