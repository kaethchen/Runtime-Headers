@class NSMutableArray;

@interface BMSQLRow : NSObject <BMRow>

@property (retain, nonatomic) NSMutableArray *allValues;

+ (id)new;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)columnCount;
- (id)values;
- (id)initWithValues:(id)a0;
- (id)valueAtIdx:(unsigned long long)a0;

@end
