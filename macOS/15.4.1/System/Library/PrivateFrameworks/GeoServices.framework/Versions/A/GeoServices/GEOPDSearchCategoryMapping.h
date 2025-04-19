@class NSString, NSMutableArray, PBDataReader;

@interface GEOPDSearchCategoryMapping : PBCodable <NSCopying> {
    PBDataReader *_reader;
    NSString *_categoryId;
    long long _densityScore;
    NSMutableArray *_relatedCategories;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_densityScore : 1; unsigned char read_categoryId : 1; unsigned char read_relatedCategories : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)jsonRepresentation;

@end
