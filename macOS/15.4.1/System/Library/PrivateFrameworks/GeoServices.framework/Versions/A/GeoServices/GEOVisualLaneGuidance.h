@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_instructions;
    NSMutableArray *_laneInfos;
    NSMutableArray *_titles;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_instructions : 1; unsigned char read_laneInfos : 1; unsigned char read_titles : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *laneInfos;
@property (retain, nonatomic) NSMutableArray *instructions;
@property (retain, nonatomic) NSMutableArray *titles;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)instructionType;
+ (BOOL)isValid:(id)a0;
+ (Class)laneInfoType;
+ (Class)titleType;

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
- (void)addInstruction:(id)a0;
- (void)addLaneInfo:(id)a0;
- (void)addTitle:(id)a0;
- (void)clearInstructions;
- (void)clearLaneInfos;
- (void)clearTitles;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)instructionAtIndex:(unsigned long long)a0;
- (unsigned long long)instructionsCount;
- (id)jsonRepresentation;
- (id)laneInfoAtIndex:(unsigned long long)a0;
- (unsigned long long)laneInfosCount;
- (void)readAll:(BOOL)a0;
- (id)titleAtIndex:(unsigned long long)a0;
- (unsigned long long)titlesCount;

@end
