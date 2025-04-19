@class PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOLogMsgStateDetailLookAroundLog : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _durationSec;
    NSMutableArray *_lookAroundPipRecords;
    NSMutableArray *_lookAroundViewRecords;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _poisShown;
    struct { unsigned char has_durationSec : 1; unsigned char has_poisShown : 1; unsigned char read_unknownFields : 1; unsigned char read_lookAroundPipRecords : 1; unsigned char read_lookAroundViewRecords : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasDurationSec;
@property (nonatomic) double durationSec;
@property (nonatomic) BOOL hasPoisShown;
@property (nonatomic) unsigned int poisShown;
@property (retain, nonatomic) NSMutableArray *lookAroundPipRecords;
@property (retain, nonatomic) NSMutableArray *lookAroundViewRecords;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)lookAroundPipRecordsType;
+ (Class)lookAroundViewRecordsType;

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
- (void)addLookAroundPipRecords:(id)a0;
- (void)addLookAroundViewRecords:(id)a0;
- (void)clearLookAroundPipRecords;
- (void)clearLookAroundViewRecords;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)lookAroundPipRecordsAtIndex:(unsigned long long)a0;
- (unsigned long long)lookAroundPipRecordsCount;
- (id)lookAroundViewRecordsAtIndex:(unsigned long long)a0;
- (unsigned long long)lookAroundViewRecordsCount;
- (void)readAll:(BOOL)a0;

@end
