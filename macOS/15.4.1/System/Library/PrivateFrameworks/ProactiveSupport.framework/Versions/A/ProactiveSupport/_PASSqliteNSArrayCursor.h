@class NSArray;

@interface _PASSqliteNSArrayCursor : _PASSqliteRowIdIndexSetCursor {
    id _equalTo;
}

@property (retain, nonatomic) NSArray *collection;

+ (id)planningInfoForValueConstraint:(int)a0;
+ (const char *)sqliteMethodName;

- (id)init;
- (void).cxx_destruct;
- (void)setCollection:(id)a0;
- (void)applyConstraint:(int)a0 withArgument:(id)a1;
- (BOOL)currentIndexedRowSatisfiesConstraints;
- (id)currentIndexedValue;

@end
