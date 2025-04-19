@class NSDictionary;

@interface COStateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSDictionary *state;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithState:(id)a0;

@end
