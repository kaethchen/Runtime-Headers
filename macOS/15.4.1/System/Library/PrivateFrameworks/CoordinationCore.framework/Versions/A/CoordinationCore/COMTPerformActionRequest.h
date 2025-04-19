@class NSArray;

@interface COMTPerformActionRequest : COMessageChannelRequest

@property (readonly, copy, nonatomic) NSArray *actions;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithActions:(id)a0;

@end
