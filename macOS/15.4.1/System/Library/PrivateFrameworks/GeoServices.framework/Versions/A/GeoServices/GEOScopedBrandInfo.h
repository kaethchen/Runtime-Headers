@class NSString, NSMutableArray, PBDataReader;

@interface GEOScopedBrandInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_isoCountryCode;
    NSMutableArray *_localizedNames;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_isoCountryCode : 1; unsigned char read_localizedNames : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasIsoCountryCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (retain, nonatomic) NSMutableArray *localizedNames;

+ (BOOL)isValid:(id)a0;
+ (Class)localizedNameType;

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
- (void)addLocalizedName:(id)a0;
- (void)clearLocalizedNames;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)localizedNameAtIndex:(unsigned long long)a0;
- (unsigned long long)localizedNamesCount;
- (void)readAll:(BOOL)a0;

@end
