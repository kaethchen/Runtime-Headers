@interface SGM2HarvestCost : PBCodable <NSCopying> {
    struct { unsigned char documentSource : 1; unsigned char harvestSource : 1; unsigned char harvestedOnBattery : 1; unsigned char highPriority : 1; unsigned char receivedOnBattery : 1; } _has;
}

@property (nonatomic) BOOL hasDocumentSource;
@property (nonatomic) int documentSource;
@property (nonatomic) BOOL hasHighPriority;
@property (nonatomic) BOOL highPriority;
@property (nonatomic) BOOL hasReceivedOnBattery;
@property (nonatomic) BOOL receivedOnBattery;
@property (nonatomic) BOOL hasHarvestedOnBattery;
@property (nonatomic) BOOL harvestedOnBattery;
@property (nonatomic) BOOL hasHarvestSource;
@property (nonatomic) int harvestSource;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsDocumentSource:(id)a0;
- (int)StringAsHarvestSource:(id)a0;
- (id)documentSourceAsString:(int)a0;
- (id)harvestSourceAsString:(int)a0;

@end
