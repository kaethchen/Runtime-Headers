@class NSString;

@interface HDCodableMedicalUserDomainConcept : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _categoryTypes;
}

@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) unsigned long long categoryTypesCount;
@property (readonly, nonatomic) long long *categoryTypes;

- (void)dealloc;
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
- (void)addCategoryTypes:(long long)a0;
- (long long)categoryTypesAtIndex:(unsigned long long)a0;
- (void)clearCategoryTypes;
- (void)setCategoryTypes:(long long *)a0 count:(unsigned long long)a1;

@end
