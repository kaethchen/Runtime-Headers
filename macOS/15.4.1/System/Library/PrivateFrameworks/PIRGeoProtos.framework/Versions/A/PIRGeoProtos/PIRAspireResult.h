@class NSData, PIRGeoListSnippet;

@interface PIRAspireResult : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasGeoList;
@property (retain, nonatomic) PIRGeoListSnippet *geoList;
@property (readonly, nonatomic) BOOL hasCompressedGeoList;
@property (retain, nonatomic) NSData *compressedGeoList;

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

@end
