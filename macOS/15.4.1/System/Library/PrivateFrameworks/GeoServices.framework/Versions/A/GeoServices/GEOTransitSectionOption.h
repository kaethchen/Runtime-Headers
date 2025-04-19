@class PBUnknownFields;

@interface GEOTransitSectionOption : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _sections;
    unsigned int _defaultSectionIndex;
    struct { unsigned char has_defaultSectionIndex : 1; } _flags;
}

@property (readonly, nonatomic) unsigned long long sectionsCount;
@property (readonly, nonatomic) unsigned int *sections;
@property (nonatomic) BOOL hasDefaultSectionIndex;
@property (nonatomic) unsigned int defaultSectionIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned int)sectionAtIndex:(unsigned long long)a0;
- (void)addSection:(unsigned int)a0;
- (void)clearSections;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithJSON:(id)a0;
- (id)jsonRepresentation;
- (void)readAll:(BOOL)a0;
- (void)setSections:(unsigned int *)a0 count:(unsigned long long)a1;

@end
