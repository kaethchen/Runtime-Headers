@class NSMutableArray;

@interface HDCodableOntologyLocalizedEducationContent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char version : 1; unsigned char deleted : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *sections;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) long long version;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasDeleted;
@property (nonatomic) BOOL deleted;

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
