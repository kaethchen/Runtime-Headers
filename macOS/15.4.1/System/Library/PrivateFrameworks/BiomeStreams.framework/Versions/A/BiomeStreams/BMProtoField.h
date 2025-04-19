@class NSString;

@interface BMProtoField : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long number;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) Class subMessageClass;

- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 number:(long long)a1 type:(long long)a2 subMessageClass:(Class)a3;

@end
