@class PBDataReader, NSString, GEOPDPictureItemContainer, GEOPDTextItemContainer, PBUnknownFields;

@interface GEOPDAnnotatedItemList : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDPictureItemContainer *_picItemContainer;
    GEOPDTextItemContainer *_textItemContainer;
    NSString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _annotatedItemStyle;
    struct { unsigned char has_annotatedItemStyle : 1; unsigned char read_unknownFields : 1; unsigned char read_picItemContainer : 1; unsigned char read_textItemContainer : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)annotatedItemListForPlaceData:(id)a0;

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
