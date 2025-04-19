@class NSMutableArray;

@interface GEOPDPhotoConstraints : PBCodable <NSCopying> {
    unsigned long long _maxPixels;
    NSMutableArray *_mediaTypes;
    unsigned long long _minPixels;
    float _maxAspectRatio;
    unsigned int _maxNumberOfPhotos;
    struct { unsigned char has_maxPixels : 1; unsigned char has_minPixels : 1; unsigned char has_maxAspectRatio : 1; unsigned char has_maxNumberOfPhotos : 1; } _flags;
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
