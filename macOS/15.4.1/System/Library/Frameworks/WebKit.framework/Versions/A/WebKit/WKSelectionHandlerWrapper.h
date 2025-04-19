@interface WKSelectionHandlerWrapper : NSObject {
    struct Function<void ()> { struct unique_ptr<WTF::Detail::CallableWrapperBase<void>, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { struct __compressed_pair<WTF::Detail::CallableWrapperBase<void> *, std::default_delete<WTF::Detail::CallableWrapperBase<void>>> { void *__value_; } __ptr_; } m_callableWrapper; } _selectionHandler;
}

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)executeSelectionHandler;
- (id)initWithSelectionHandler:(void *)a0;

@end
