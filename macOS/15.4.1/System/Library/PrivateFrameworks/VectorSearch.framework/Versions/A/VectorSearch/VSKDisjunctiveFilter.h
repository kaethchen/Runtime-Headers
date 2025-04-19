@class VSKDatabaseValue;

@interface VSKDisjunctiveFilter : NSObject

@property (nonatomic) long long op;
@property (copy, nonatomic) VSKDatabaseValue *value;

- (void).cxx_destruct;
- (id)initWithOperator:(long long)a0 value:(id)a1;

@end
