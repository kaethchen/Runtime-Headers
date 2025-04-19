@class NSMutableArray;

@interface CKDPAncestryEtag : PBCodable <NSCopying> {
    struct { unsigned char validationType : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *ancestorInformations;
@property (nonatomic) BOOL hasValidationType;
@property (nonatomic) int validationType;

+ (Class)ancestorInformationType;

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
- (int)StringAsValidationType:(id)a0;
- (void)addAncestorInformation:(id)a0;
- (id)ancestorInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)ancestorInformationsCount;
- (void)clearAncestorInformations;
- (id)validationTypeAsString:(int)a0;

@end
