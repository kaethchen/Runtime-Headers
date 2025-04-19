@class PBUnknownFields;

@interface GEOMapKitCount : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned int _appCount;
    int _appType;
    int _countType;
    unsigned int _useCount;
    struct { unsigned char has_appCount : 1; unsigned char has_appType : 1; unsigned char has_countType : 1; unsigned char has_useCount : 1; } _flags;
}

@property (nonatomic) BOOL hasCountType;
@property (nonatomic) int countType;
@property (nonatomic) BOOL hasAppType;
@property (nonatomic) int appType;
@property (nonatomic) BOOL hasUseCount;
@property (nonatomic) unsigned int useCount;
@property (nonatomic) BOOL hasAppCount;
@property (nonatomic) unsigned int appCount;
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
- (int)StringAsCountType:(id)a0;
- (int)StringAsAppType:(id)a0;
- (id)appTypeAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)countTypeAsString:(int)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
