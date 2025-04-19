@class NSMutableArray;

@interface GEOPBOfflineDataLayerBatches : PBCodable <NSCopying> {
    struct GEOPBOfflineDataLayerVersion { int _layer; unsigned long long _version; struct { unsigned char layer : 1; unsigned char version : 1; } _has; } _layerVersion;
    NSMutableArray *_batchReferences;
    struct { unsigned char has_layerVersion : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
