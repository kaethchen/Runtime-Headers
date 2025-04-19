@class NSString;

@interface PPSSQLitePropertyPredicate : PPSSQLitePredicate <NSCopying>

@property (readonly, copy, nonatomic) NSString *property;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
