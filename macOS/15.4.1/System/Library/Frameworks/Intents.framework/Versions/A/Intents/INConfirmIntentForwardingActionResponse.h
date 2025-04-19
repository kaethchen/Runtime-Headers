@class NSData, NSSet, INIntentResponse;

@interface INConfirmIntentForwardingActionResponse : INIntentForwardingActionResponse

@property (readonly, nonatomic) INIntentResponse *intentResponse;
@property (readonly, nonatomic) NSData *launchContextActivityData;
@property (readonly, nonatomic) NSSet *cacheItems;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntentResponse:(id)a0 launchContextActivityData:(id)a1 cacheItems:(id)a2 error:(id)a3;

@end
