@class NSString, PBUnknownFields;

@interface GEOVLFInitializationFailureDetails : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSString *_arkitUnderlyingErrorDomain;
    int _arkitErrorCode;
    int _arkitUnderlyingErrorCode;
    struct { unsigned char has_arkitErrorCode : 1; unsigned char has_arkitUnderlyingErrorCode : 1; } _flags;
}

@property (nonatomic) BOOL hasArkitErrorCode;
@property (nonatomic) int arkitErrorCode;
@property (nonatomic) BOOL hasArkitUnderlyingErrorCode;
@property (nonatomic) int arkitUnderlyingErrorCode;
@property (readonly, nonatomic) BOOL hasArkitUnderlyingErrorDomain;
@property (retain, nonatomic) NSString *arkitUnderlyingErrorDomain;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
