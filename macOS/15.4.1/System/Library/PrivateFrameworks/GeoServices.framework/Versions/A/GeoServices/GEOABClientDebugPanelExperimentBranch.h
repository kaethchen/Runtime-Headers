@class PBDataReader, GEOABDebugPanelExperimentBranch, NSMutableArray, PBUnknownFields;

@interface GEOABClientDebugPanelExperimentBranch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_configKeyValues;
    GEOABDebugPanelExperimentBranch *_debugExperimentBranch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_configKeyValues : 1; unsigned char read_debugExperimentBranch : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDebugExperimentBranch;
@property (retain, nonatomic) GEOABDebugPanelExperimentBranch *debugExperimentBranch;
@property (retain, nonatomic) NSMutableArray *configKeyValues;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)configKeyValueType;
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
- (void)addConfigKeyValue:(id)a0;
- (void)clearConfigKeyValues;
- (void)clearUnknownFields:(BOOL)a0;
- (id)configKeyValueAtIndex:(unsigned long long)a0;
- (unsigned long long)configKeyValuesCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
