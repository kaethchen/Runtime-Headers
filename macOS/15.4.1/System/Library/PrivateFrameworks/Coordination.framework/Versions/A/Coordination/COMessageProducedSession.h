@class COMessageSessionProducer;

@interface COMessageProducedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionProducer *producer;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithMember:(id)a0 producer:(id)a1;

@end
