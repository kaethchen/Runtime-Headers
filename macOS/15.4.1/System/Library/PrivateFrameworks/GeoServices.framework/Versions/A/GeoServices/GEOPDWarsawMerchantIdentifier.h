@class PBUnknownFields, NSString, PBDataReader;

@interface GEOPDWarsawMerchantIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_merchantDomain;
    NSString *_merchantId;
    NSString *_merchantName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_merchantDomain : 1; unsigned char read_merchantId : 1; unsigned char read_merchantName : 1; unsigned char wrote_anyField : 1; } _flags;
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
