@class NSArray;

@interface PPSSQLiteEntity : NSObject <NSCopying>

@property (readonly, copy) NSArray *tableNames;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)disambiguatedSQLForProperty:(id)a0 shouldEscape:(BOOL)a1;
- (id)initWithTableNames:(id)a0;
- (id)joinClause;

@end
