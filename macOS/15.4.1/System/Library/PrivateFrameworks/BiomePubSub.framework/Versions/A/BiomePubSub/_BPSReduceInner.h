@interface _BPSReduceInner : BPSReduceProducer

@property (readonly, nonatomic) id /* block */ reduce;

- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 initial:(id)a1 reduce:(id /* block */)a2;
- (id)receiveNewValue:(id)a0;

@end
