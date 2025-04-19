@class XCTElementContainingTransformer;

@interface XCTContainingTransformerIterator : XCTMatchingElementIterator {
    BOOL _hasCheckedInput;
}

@property (readonly) XCTElementContainingTransformer *containingTransformer;

- (void).cxx_destruct;
- (id)initWithInput:(id)a0 containingTransformer:(id)a1;
- (id)nextMatch;

@end
