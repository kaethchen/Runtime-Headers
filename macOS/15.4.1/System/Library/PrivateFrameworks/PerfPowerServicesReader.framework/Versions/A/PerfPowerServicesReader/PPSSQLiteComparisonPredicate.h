@interface PPSSQLiteComparisonPredicate : PPSSQLitePropertyPredicate <NSCopying>

@property (readonly, nonatomic) long long comparisonType;
@property (readonly, nonatomic) id value;

+ (id)predicateWithProperty:(id)a0 equalToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
+ (id)predicateWithProperty:(id)a0 beginsWithString:(id)a1;
+ (id)predicateWithProperty:(id)a0 containsString:(id)a1;
+ (id)predicateWithProperty:(id)a0 endsWithString:(id)a1;
+ (id)predicateWithProperty:(id)a0 greaterThanOrEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 greaterThanValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 lessThanOrEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 lessThanValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 likePattern:(id)a1;
+ (id)predicateWithProperty:(id)a0 likeValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 notEqualToValue:(id)a1;
+ (id)predicateWithProperty:(id)a0 likeValue:(id)a1 escapeCharacter:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_comparisonTypeString;
- (void)bindToStatement:(struct sqlite3_stmt { } *)a0 bindingIndex:(inout int *)a1;
- (id)initWithProperty:(id)a0 value:(id)a1 comparisonType:(long long)a2;
- (id)sqlForEntity:(id)a0;

@end
