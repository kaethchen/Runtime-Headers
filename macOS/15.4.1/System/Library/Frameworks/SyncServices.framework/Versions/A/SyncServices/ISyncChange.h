@interface ISyncChange : NSObject

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)changeWithType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (int)type;
- (id)changes;
- (id)entityName;
- (id)record;
- (id)recordIdentifier;
- (id)initWithChangeType:(int)a0 recordIdentifier:(id)a1 changes:(id)a2;

@end
