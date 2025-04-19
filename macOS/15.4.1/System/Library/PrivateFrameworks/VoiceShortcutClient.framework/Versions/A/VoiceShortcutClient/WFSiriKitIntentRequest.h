@class INIntent;

@interface WFSiriKitIntentRequest : WFSiriActionRequest

@property (readonly, nonatomic) INIntent *intent;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIntent:(id)a0;

@end
