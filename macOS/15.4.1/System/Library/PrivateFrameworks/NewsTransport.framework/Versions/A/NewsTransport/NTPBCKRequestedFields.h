@class NSMutableArray;

@interface NTPBCKRequestedFields : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *fields;

+ (Class)fieldsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addFields:(id)a0;
- (void)clearFields;
- (id)fieldsAtIndex:(unsigned long long)a0;
- (unsigned long long)fieldsCount;

@end
