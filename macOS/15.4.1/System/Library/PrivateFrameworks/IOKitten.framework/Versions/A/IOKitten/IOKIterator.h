@interface IOKIterator : IOKObject {
    id /* block */ _enumerationBlock;
}

@property (readonly, nonatomic, getter=isValid) BOOL valid;

- (void).cxx_destruct;
- (id)nextObject;
- (void)reset;
- (id)initWithIterator:(unsigned int)a0;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)initWithIOObject:(unsigned int)a0;
- (void)enumerate;
- (id)initWithIterator:(unsigned int)a0 enumerationBlock:(id /* block */)a1;

@end
