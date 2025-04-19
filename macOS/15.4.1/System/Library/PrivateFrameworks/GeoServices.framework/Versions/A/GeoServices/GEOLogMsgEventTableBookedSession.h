@class NSString, NSMutableArray, PBDataReader;

@interface GEOLogMsgEventTableBookedSession : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_bookedTableSessionId;
    NSMutableArray *_bookedTables;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_bookedTableSessionId : 1; unsigned char read_bookedTables : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasBookedTableSessionId;
@property (retain, nonatomic) NSString *bookedTableSessionId;
@property (retain, nonatomic) NSMutableArray *bookedTables;

+ (Class)bookedTableType;
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
- (void)addBookedTable:(id)a0;
- (id)bookedTableAtIndex:(unsigned long long)a0;
- (unsigned long long)bookedTablesCount;
- (void)clearBookedTables;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;

@end
