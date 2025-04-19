@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOPublisherAttributionSource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_appAdamID;
    NSMutableArray *_localizedAttributions;
    NSString *_websiteURL;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_appAdamID : 1; unsigned char read_localizedAttributions : 1; unsigned char read_websiteURL : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *localizedAttributions;
@property (readonly, nonatomic) BOOL hasAppAdamID;
@property (retain, nonatomic) NSString *appAdamID;
@property (readonly, nonatomic) BOOL hasWebsiteURL;
@property (retain, nonatomic) NSString *websiteURL;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedAttributionType;

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
- (void)addLocalizedAttribution:(id)a0;
- (void)clearLocalizedAttributions;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)localizedAttributionAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedAttributionsCount;
- (void)readAll:(BOOL)a0;

@end
