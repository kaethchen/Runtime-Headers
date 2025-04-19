@class NSString, PBDataReader, PBUnknownFields;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_processName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _appType;
    BOOL _appDarkMode;
    struct { unsigned char has_appType : 1; unsigned char has_appDarkMode : 1; unsigned char read_unknownFields : 1; unsigned char read_appIdentifier : 1; unsigned char read_appMajorVersion : 1; unsigned char read_appMinorVersion : 1; unsigned char read_processName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (retain, nonatomic) NSString *appIdentifier;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (retain, nonatomic) NSString *appMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (retain, nonatomic) NSString *appMinorVersion;
@property (nonatomic) BOOL hasAppDarkMode;
@property (nonatomic) BOOL appDarkMode;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (retain, nonatomic) NSString *processName;
@property (nonatomic) BOOL hasAppType;
@property (nonatomic) int appType;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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
- (int)StringAsAppType:(id)a0;
- (id)appTypeAsString:(int)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
