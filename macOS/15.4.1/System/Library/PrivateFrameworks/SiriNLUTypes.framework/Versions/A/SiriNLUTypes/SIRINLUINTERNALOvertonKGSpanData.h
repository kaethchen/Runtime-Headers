@class NSMutableArray;

@interface SIRINLUINTERNALOvertonKGSpanData : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (retain, nonatomic) NSMutableArray *features;

+ (Class)featuresType;

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
- (void)addFeatures:(id)a0;
- (id)featuresAtIndex:(unsigned long long)a0;
- (void)clearFeatures;
- (unsigned long long)featuresCount;

@end
