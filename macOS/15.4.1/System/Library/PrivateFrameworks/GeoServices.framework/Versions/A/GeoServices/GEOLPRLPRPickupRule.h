@class PBDataReader, GEOLPRLicensePlateStructure, NSMutableArray;

@interface GEOLPRLPRPickupRule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _plateTypeIndexes;
    NSMutableArray *_pickupChars;
    GEOLPRLicensePlateStructure *_prLicensePlateStructure;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_plateTypeIndexes : 1; unsigned char read_pickupChars : 1; unsigned char read_prLicensePlateStructure : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPrLicensePlateStructure;
@property (retain, nonatomic) GEOLPRLicensePlateStructure *prLicensePlateStructure;
@property (readonly, nonatomic) unsigned long long plateTypeIndexesCount;
@property (readonly, nonatomic) unsigned int *plateTypeIndexes;
@property (retain, nonatomic) NSMutableArray *pickupChars;

+ (BOOL)isValid:(id)a0;
+ (Class)pickupCharType;

- (void)dealloc;
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
- (void)addPickupChar:(id)a0;
- (void)addPlateTypeIndexes:(unsigned int)a0;
- (void)clearPickupChars;
- (void)clearPlateTypeIndexes;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (id)pickupCharAtIndex:(unsigned long long)a0;
- (unsigned long long)pickupCharsCount;
- (unsigned int)plateTypeIndexesAtIndex:(unsigned long long)a0;
- (void)readAll:(BOOL)a0;
- (void)setPlateTypeIndexes:(unsigned int *)a0 count:(unsigned long long)a1;

@end
