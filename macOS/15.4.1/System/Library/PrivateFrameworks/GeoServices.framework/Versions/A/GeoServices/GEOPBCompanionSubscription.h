@class PBDataReader, NSString, GEOMapRegion, PBUnknownFields;

@interface GEOPBCompanionSubscription : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    unsigned long long _dataType;
    NSString *_displayName;
    unsigned long long _downloadedDataBytes;
    NSString *_identifier;
    NSString *_originatingBundleIdentifier;
    GEOMapRegion *_region;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _policy;
    BOOL _syncToWatch;
    struct { unsigned char has_dataType : 1; unsigned char has_downloadedDataBytes : 1; unsigned char has_policy : 1; unsigned char has_syncToWatch : 1; unsigned char read_unknownFields : 1; unsigned char read_displayName : 1; unsigned char read_identifier : 1; unsigned char read_originatingBundleIdentifier : 1; unsigned char read_region : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasRegion;
@property (retain, nonatomic) GEOMapRegion *region;
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) BOOL hasPolicy;
@property (nonatomic) unsigned int policy;
@property (readonly, nonatomic) BOOL hasOriginatingBundleIdentifier;
@property (retain, nonatomic) NSString *originatingBundleIdentifier;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (retain, nonatomic) NSString *displayName;
@property (nonatomic) BOOL hasSyncToWatch;
@property (nonatomic) BOOL syncToWatch;
@property (nonatomic) BOOL hasDownloadedDataBytes;
@property (nonatomic) unsigned long long downloadedDataBytes;
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
- (void)clearUnknownFields:(BOOL)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
