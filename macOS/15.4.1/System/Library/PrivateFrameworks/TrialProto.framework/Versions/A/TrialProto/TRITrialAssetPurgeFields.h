@interface TRITrialAssetPurgeFields : PBCodable <NSCopying> {
    struct { unsigned char purgeabilityLevel : 1; } _has;
}

@property (nonatomic) BOOL hasPurgeabilityLevel;
@property (nonatomic) int purgeabilityLevel;

+ (int)assetPurgeFieldsPurgeabilityLevelFromPurgeabilityLevel:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPurgeabilityLevel:(id)a0;
- (id)purgeabilityLevelAsString:(int)a0;

@end
