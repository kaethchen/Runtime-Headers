@class NSMutableArray, CKDPAsset;

@interface CKDPPackage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasManifest;
@property (retain, nonatomic) CKDPAsset *manifest;
@property (retain, nonatomic) NSMutableArray *sections;

+ (Class)sectionsType;

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
- (void)clearSections;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;

@end
