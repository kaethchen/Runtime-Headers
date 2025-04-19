@interface AMSCB1PHTTPTransactionMetrics : NSObject {
    struct optional<std::reference_wrapper<const AMSCore::HTTPTransactionMetrics>> { union { char __null_state_; struct reference_wrapper<const AMSCore::HTTPTransactionMetrics> { struct HTTPTransactionMetrics *__f_; } __val_; } ; BOOL __engaged_; } _httpTransactionMetrics;
    id _owner;
}

- (void).cxx_destruct;
- (id).cxx_construct;

@end
