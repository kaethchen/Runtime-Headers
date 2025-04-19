@class NSArray;

@interface WebCoreNSURLSessionTaskMetrics : NSObject {
    struct RetainPtr<WebCoreNSURLSessionTaskTransactionMetrics> { void *m_ptr; } _transactionMetrics;
    struct RefPtr<WTF::GuaranteedSerialFunctionDispatcher, WTF::RawPtrTraits<WTF::GuaranteedSerialFunctionDispatcher>, WTF::DefaultRefDerefTraits<WTF::GuaranteedSerialFunctionDispatcher>> { struct GuaranteedSerialFunctionDispatcher *m_ptr; } _targetDispatcher;
}

@property (readonly, copy) NSArray *transactionMetrics;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)transactionMetrics;
- (id)_initWithMetrics:(void *)a0 onTarget:(void *)a1;

@end
