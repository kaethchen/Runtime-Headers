@class SIRINLUEXTERNALSemVer, NSMutableArray;

@interface SIRINLUEXTERNALUsoOntologyVocabulary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUsoVersion;
@property (retain, nonatomic) SIRINLUEXTERNALSemVer *usoVersion;
@property (retain, nonatomic) NSMutableArray *elementNames;

+ (Class)elementNamesType;

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
- (void)addElementNames:(id)a0;
- (void)clearElementNames;
- (id)elementNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)elementNamesCount;

@end
