@class NSString, NSMutableArray, PBDataReader;

@interface GEORPCurrentEnvironmentManifestURLs : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_environmentDisplayName;
    NSString *_environmentReleaseName;
    NSMutableArray *_urls;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_environmentDisplayName : 1; unsigned char read_environmentReleaseName : 1; unsigned char read_urls : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasEnvironmentDisplayName;
@property (retain, nonatomic) NSString *environmentDisplayName;
@property (readonly, nonatomic) BOOL hasEnvironmentReleaseName;
@property (retain, nonatomic) NSString *environmentReleaseName;
@property (retain, nonatomic) NSMutableArray *urls;

+ (Class)urlType;
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
- (void)addUrl:(id)a0;
- (void)clearUrls;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (id)urlAtIndex:(unsigned long long)a0;
- (unsigned long long)urlsCount;

@end
