@class NSString;

@interface IDSQRProtoExperimentOverride : PBCodable <NSCopying> {
    struct { unsigned char experimentId : 1; unsigned char value : 1; } _has;
}

@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) int experimentId;
@property (readonly, nonatomic) BOOL hasExperimentName;
@property (retain, nonatomic) NSString *experimentName;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL value;

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
- (int)StringAsExperimentId:(id)a0;
- (id)experimentIdAsString:(int)a0;

@end
