@interface AWDCoreRoutineRoadClassItem : PBCodable <NSCopying> {
    struct { unsigned char percentage : 1; unsigned char roadClass : 1; } _has;
}

@property (nonatomic) BOOL hasRoadClass;
@property (nonatomic) int roadClass;
@property (nonatomic) BOOL hasPercentage;
@property (nonatomic) int percentage;

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
