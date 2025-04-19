@class ASTIdentity, NSArray;

@interface ASTProfileResult : ASTSealablePayload

@property (readonly) ASTIdentity *identity;
@property (retain) NSArray *properties;
@property (retain) NSArray *tests;

+ (id)resultWithIdentity:(id)a0;
+ (id)sealedProfileResultWithPayload:(id)a0 signature:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0;
- (id)generatePayload;

@end
