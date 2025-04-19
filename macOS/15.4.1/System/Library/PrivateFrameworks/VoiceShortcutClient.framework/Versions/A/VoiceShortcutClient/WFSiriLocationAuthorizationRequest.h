@interface WFSiriLocationAuthorizationRequest : WFSiriActionRequest

@property (readonly, nonatomic) BOOL needsPreciseLocation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNeedsPreciseLocation:(BOOL)a0;

@end
