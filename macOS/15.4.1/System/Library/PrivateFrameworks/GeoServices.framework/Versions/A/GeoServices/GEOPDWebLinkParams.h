@class PBDataReader, NSString, GEOPDIcon, PBUnknownFields;

@interface GEOPDWebLinkParams : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDIcon *_icon;
    NSString *_title;
    NSString *_url;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _supportsEmbeddedWebBrowser;
    struct { unsigned char has_supportsEmbeddedWebBrowser : 1; unsigned char read_unknownFields : 1; unsigned char read_icon : 1; unsigned char read_title : 1; unsigned char read_url : 1; unsigned char wrote_anyField : 1; } _flags;
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

@end
