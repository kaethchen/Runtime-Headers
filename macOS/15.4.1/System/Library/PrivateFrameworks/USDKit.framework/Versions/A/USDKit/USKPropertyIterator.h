@interface USKPropertyIterator : NSObject <USKIterator> {
    struct vector<pxrInternal__aapl__pxrReserved__::UsdProperty, std::allocator<pxrInternal__aapl__pxrReserved__::UsdProperty>> { struct UsdProperty *__begin_; struct UsdProperty *__end_; struct __compressed_pair<pxrInternal__aapl__pxrReserved__::UsdProperty *, std::allocator<pxrInternal__aapl__pxrReserved__::UsdProperty>> { struct UsdProperty *__value_; } __end_cap_; } _properties;
    struct __wrap_iter<pxrInternal__aapl__pxrReserved__::UsdProperty *> { struct UsdProperty *__i_; } _it;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id).cxx_construct;
- (id)initWithProperties:(const void *)a0;

@end
