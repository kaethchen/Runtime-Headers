@class NSMutableArray;

@interface CKDPAdopterFeatureSet : PBCodable <NSCopying> {
    struct { unsigned char minimumSchemaVersion : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumSchemaVersion;
@property (nonatomic) int minimumSchemaVersion;
@property (retain, nonatomic) NSMutableArray *zoneFeatures;
@property (retain, nonatomic) NSMutableArray *recordFeatures;
@property (retain, nonatomic) NSMutableArray *fieldFeatures;

+ (Class)fieldFeaturesType;
+ (Class)recordFeaturesType;
+ (Class)zoneFeaturesType;

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
- (void)addFieldFeatures:(id)a0;
- (void)addRecordFeatures:(id)a0;
- (void)addZoneFeatures:(id)a0;
- (void)clearFieldFeatures;
- (void)clearRecordFeatures;
- (void)clearZoneFeatures;
- (id)fieldFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldFeaturesCount;
- (id)recordFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)recordFeaturesCount;
- (id)zoneFeaturesAtIndex:(unsigned long long)a0;
- (unsigned long long)zoneFeaturesCount;

@end
