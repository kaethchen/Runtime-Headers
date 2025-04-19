@class NSMutableArray, NTPBCKRecordType;

@interface NTPBFetchRecordSpec : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasRecordType;
@property (retain, nonatomic) NTPBCKRecordType *recordType;
@property (retain, nonatomic) NSMutableArray *desiredFields;
@property (retain, nonatomic) NSMutableArray *linkedFields;

+ (Class)desiredFieldsType;
+ (Class)linkedFieldsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addDesiredFields:(id)a0;
- (void)addLinkedFields:(id)a0;
- (void)clearDesiredFields;
- (void)clearLinkedFields;
- (id)desiredFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)desiredFieldsCount;
- (id)linkedFieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)linkedFieldsCount;

@end
