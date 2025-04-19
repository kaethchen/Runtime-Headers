@class VCPProtoTimeRange;

@interface VCPProtoSummarizedEmbeddingResult : PBCodable <VCPProtoResultLegacyConversionProtocol, NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _embeddingIDs;
}

@property (retain, nonatomic) VCPProtoTimeRange *timeRange;
@property (readonly, nonatomic) unsigned long long embeddingIDsCount;
@property (readonly, nonatomic) unsigned int *embeddingIDs;

+ (id)resultFromLegacyDictionary:(id)a0;

- (void)dealloc;
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
- (void)addEmbeddingID:(unsigned int)a0;
- (void)clearEmbeddingIDs;
- (unsigned int)embeddingIDAtIndex:(unsigned long long)a0;
- (id)exportToLegacyDictionary;
- (void)setEmbeddingIDs:(unsigned int *)a0 count:(unsigned long long)a1;

@end
