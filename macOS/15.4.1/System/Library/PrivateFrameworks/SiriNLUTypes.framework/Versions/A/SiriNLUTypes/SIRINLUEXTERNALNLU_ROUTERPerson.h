@class NSData;

@interface SIRINLUEXTERNALNLU_ROUTERPerson : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPerson;
@property (retain, nonatomic) NSData *person;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
