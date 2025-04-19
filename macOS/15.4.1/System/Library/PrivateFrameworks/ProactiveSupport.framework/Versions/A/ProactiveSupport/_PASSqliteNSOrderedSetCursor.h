@class NSOrderedSet;

@interface _PASSqliteNSOrderedSetCursor : _PASSqliteRowIdIndexSetCursor

@property (retain, nonatomic) NSOrderedSet *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteCreateTableStatement;
+ (const char *)sqliteMethodName;

- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (id)currentIndexedValue;

@end
