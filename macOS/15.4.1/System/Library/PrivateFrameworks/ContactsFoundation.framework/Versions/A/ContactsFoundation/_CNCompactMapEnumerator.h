@class NSEnumerator;

@interface _CNCompactMapEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    id /* block */ _transform;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithEnumerator:(id)a0 transform:(id /* block */)a1;

@end
