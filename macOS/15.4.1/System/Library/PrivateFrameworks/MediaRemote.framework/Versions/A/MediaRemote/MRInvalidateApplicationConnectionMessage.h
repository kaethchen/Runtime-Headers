@class MRApplicationConnectionContext;

@interface MRInvalidateApplicationConnectionMessage : MRProtocolMessage

@property (readonly, nonatomic) MRApplicationConnectionContext *context;

- (unsigned long long)type;
- (id)initWithConnectionContext:(id)a0 error:(id)a1;

@end
