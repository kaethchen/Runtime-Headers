@class NSString, SNNMILValue;

@interface SNNMILNamedArgument : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) SNNMILValue *value;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
