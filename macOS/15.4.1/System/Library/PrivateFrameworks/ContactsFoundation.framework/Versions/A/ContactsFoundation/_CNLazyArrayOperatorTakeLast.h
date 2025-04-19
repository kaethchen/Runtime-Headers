@class CNQueue;

@interface _CNLazyArrayOperatorTakeLast : _CNLazyArrayOperator {
    CNQueue *_buffer;
    BOOL _haveFilledBuffer;
}

- (void).cxx_destruct;
- (id)nextObject;
- (void)fillBuffer;
- (id)initWithInput:(id)a0 limit:(unsigned long long)a1;

@end
