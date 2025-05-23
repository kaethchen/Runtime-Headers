@class GEOMapRegion, NSString, PBUnknownFields;

@interface MSPRegionBookmark : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
}

@property (readonly, nonatomic) BOOL hasRegion;
@property (retain, nonatomic) GEOMapRegion *region;
@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) NSString *title;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
