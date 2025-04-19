@class WFOnScreenContentNode;

@interface INGetOnScreenContentForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) WFOnScreenContentNode *node;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNode:(id)a0 error:(id)a1;

@end
