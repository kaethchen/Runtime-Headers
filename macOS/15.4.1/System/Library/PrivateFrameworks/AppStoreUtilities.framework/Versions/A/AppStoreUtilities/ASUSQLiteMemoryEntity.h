@class NSMutableDictionary;

@interface ASUSQLiteMemoryEntity : NSObject <NSCopying>

@property (nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyValues;
@property (readonly, copy, nonatomic) NSMutableDictionary *externalPropertyValues;

+ (id)defaultProperties;
+ (id)anyOnConnection:(id)a0 predicate:(id)a1;
+ (Class)databaseEntityClass;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1;
+ (id)queryOnConnection:(id)a0 predicate:(id)a1 orderingProperties:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)valueForProperty:(id)a0;
- (id)initWithPropertyValues:(id)a0;
- (void)setValue:(id)a0 forProperty:(id)a1;
- (id)initWithDatabaseEntity:(id)a0 properties:(id)a1;
- (void)reloadFromDatabaseEntity:(id)a0 properties:(id)a1;
- (void)setExternalValuesWithDictionary:(id)a0;
- (void)setValue:(id)a0 forExternalProperty:(id)a1;
- (void)setValues:(id *)a0 forExternalProperties:(const id *)a1 count:(long long)a2;
- (void)setValues:(id *)a0 forProperties:(const id *)a1 count:(long long)a2;
- (void)setValuesWithDictionary:(id)a0;
- (id)valueForExternalProperty:(id)a0;
- (id)stringValueForProperty:(id)a0;
- (id)arrayValueForProperty:(id)a0;
- (BOOL)boolValueForProperty:(id)a0;
- (id)dateValueForProperty:(id)a0;
- (id)dictValueForProperty:(id)a0;
- (id)initWithDatabaseID:(long long)a0 propertyValues:(id)a1 externalPropertyValues:(id)a2;
- (long long)integerValueForProperty:(id)a0;
- (id)numberValueForProperty:(id)a0;
- (id)urlValueForProperty:(id)a0;
- (id)uuidValueForProperty:(id)a0;

@end
