@class PBDataReader, GEOPDCaptionedPhoto, NSMutableArray, PBUnknownFields;

@interface GEOPDGuideGroup : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_guideLocationImages;
    GEOPDCaptionedPhoto *_photo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _numGuides;
    struct { unsigned char has_numGuides : 1; unsigned char read_unknownFields : 1; unsigned char read_guideLocationImages : 1; unsigned char read_photo : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)guideGroupComponentFromPlaceData:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
