@class PBDataReader, NSString, NSMutableArray, PBUnknownFields;

@interface GEOABClientConfig : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_assignedAbBranchId;
    NSMutableArray *_configKeyValues;
    NSMutableArray *_debugExperimentBranchs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_assignedAbBranchId : 1; unsigned char read_configKeyValues : 1; unsigned char read_debugExperimentBranchs : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *configKeyValues;
@property (readonly, nonatomic) BOOL hasAssignedAbBranchId;
@property (retain, nonatomic) NSString *assignedAbBranchId;
@property (retain, nonatomic) NSMutableArray *debugExperimentBranchs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)configKeyValueType;
+ (Class)debugExperimentBranchType;
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
- (void)addDebugExperimentBranch:(id)a0;
- (void)clearConfigKeyValues;
- (void)clearDebugExperimentBranchs;
- (void)clearUnknownFields:(BOOL)a0;
- (id)configKeyValueAtIndex:(unsigned long long)a0;
- (unsigned long long)configKeyValuesCount;
- (id)debugExperimentBranchAtIndex:(unsigned long long)a0;
- (unsigned long long)debugExperimentBranchsCount;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
