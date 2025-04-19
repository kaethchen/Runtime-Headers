@interface SIRINLUEXTERNALNLU_ROUTERAliasTypes : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _options;
}

@property (readonly, nonatomic) unsigned long long optionsCount;
@property (readonly, nonatomic) int *options;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)optionsAtIndex:(unsigned long long)a0;
- (void)addOptions:(int)a0;
- (void)clearOptions;
- (int)StringAsOptions:(id)a0;
- (id)optionsAsString:(int)a0;
- (void)setOptions:(int *)a0 count:(unsigned long long)a1;

@end
