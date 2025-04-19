@class NSString;

@interface COMTTypedAction : COMTAction

@property (readonly, nonatomic) NSString *targetType;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(id)a0;

@end
