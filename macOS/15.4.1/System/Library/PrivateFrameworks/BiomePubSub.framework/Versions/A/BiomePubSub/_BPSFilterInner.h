@interface _BPSFilterInner : BPSFilterProducer

@property (readonly, nonatomic) id /* block */ isIncluded;

- (void).cxx_destruct;
- (id)initWithDownstream:(id)a0 isIncluded:(id /* block */)a1;
- (id)receiveNewValue:(id)a0;

@end
