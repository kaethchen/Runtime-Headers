@class NSEnumerator;

@interface _CNLazyArrayEnumeratorSource : NSObject <_CNLazyArrayOperation> {
    NSEnumerator *_enumerator;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithEnumerator:(id)a0;

@end
