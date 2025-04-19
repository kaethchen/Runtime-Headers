@class NSEnumerator;

@interface _CNFlatMapEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    id /* block */ _transform;
    NSEnumerator *_buffer;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithEnumerator:(id)a0 transform:(id /* block */)a1;
- (id)nextBufferedObject;
- (void)refillBuffer;

@end
