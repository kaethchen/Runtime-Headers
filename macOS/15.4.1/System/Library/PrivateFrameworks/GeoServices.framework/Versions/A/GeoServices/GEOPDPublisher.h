@class PBDataReader, GEOPDCaptionedPhoto, GEOLocalizedString, GEOPDMapsIdentifier, NSMutableArray, PBUnknownFields;

@interface GEOPDPublisher : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
    GEOLocalizedString *_name;
    GEOPDCaptionedPhoto *_photo;
    NSMutableArray *_publisherDescriptions;
    GEOPDMapsIdentifier *_publisherId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _errorState;
    unsigned int _numCollections;
    struct { unsigned char has_errorState : 1; unsigned char has_numCollections : 1; unsigned char read_unknownFields : 1; unsigned char read_collectionIds : 1; unsigned char read_name : 1; unsigned char read_photo : 1; unsigned char read_publisherDescriptions : 1; unsigned char read_publisherId : 1; unsigned char wrote_anyField : 1; } _flags;
}

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
- (id)publisherDescription;

@end
