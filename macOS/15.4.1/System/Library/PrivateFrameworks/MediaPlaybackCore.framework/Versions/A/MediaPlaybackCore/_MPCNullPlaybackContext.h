@class NSString;

@interface _MPCNullPlaybackContext : MPPlaybackContext

@property (copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionComponents;
- (Class)queueFeederClass;

@end
