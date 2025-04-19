@class NSMutableArray;

@interface PPSPBMetricHistory : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *metrics;

+ (Class)metricsType;

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
- (void)addMetrics:(id)a0;
- (void)clearMetrics;
- (unsigned long long)metricsCount;
- (id)metricsAtIndex:(unsigned long long)a0;

@end
