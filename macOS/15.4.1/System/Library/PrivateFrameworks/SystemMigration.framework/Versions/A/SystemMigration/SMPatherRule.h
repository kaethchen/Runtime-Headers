@class NSURL;

@interface SMPatherRule : NSObject

@property (readonly, nonatomic) long long ruleID;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSURL *path;

+ (id)stringFromType:(long long)a0;
+ (id)stringFromContext:(long long)a0;

- (void).cxx_destruct;
- (long long)typeFromString:(id)a0;
- (id)initWithRow:(id)a0;
- (long long)contextFromString:(id)a0;

@end
