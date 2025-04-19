@class PBDataReader, NSString, NSData, NSMutableArray, PBUnknownFields;

@interface GEORPTdmInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_anonymousUserId;
    NSMutableArray *_baaCertificates;
    NSData *_baaSignature;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _isBlocked;
    BOOL _isTrusted;
    struct { unsigned char has_isBlocked : 1; unsigned char has_isTrusted : 1; unsigned char read_unknownFields : 1; unsigned char read_anonymousUserId : 1; unsigned char read_baaCertificates : 1; unsigned char read_baaSignature : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAnonymousUserId;
@property (retain, nonatomic) NSString *anonymousUserId;
@property (nonatomic) BOOL hasIsBlocked;
@property (nonatomic) BOOL isBlocked;
@property (retain, nonatomic) NSMutableArray *baaCertificates;
@property (readonly, nonatomic) BOOL hasBaaSignature;
@property (retain, nonatomic) NSData *baaSignature;
@property (nonatomic) BOOL hasIsTrusted;
@property (nonatomic) BOOL isTrusted;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)baaCertificatesType;
+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addBaaCertificates:(id)a0;
- (id)baaCertificatesAtIndex:(unsigned long long)a0;
- (unsigned long long)baaCertificatesCount;
- (void)clearBaaCertificates;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
