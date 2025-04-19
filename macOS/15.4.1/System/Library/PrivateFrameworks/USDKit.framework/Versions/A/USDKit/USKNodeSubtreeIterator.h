@interface USKNodeSubtreeIterator : NSObject <USKIterator> {
    struct UsdPrimRange { struct Usd_PrimData *_begin; struct Usd_PrimData *_end; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _initProxyPrimPath; struct Usd_PrimFlagsPredicate { struct bitset<15UL> { unsigned long long __first_; } _mask; struct bitset<15UL> { unsigned long long __first_; } _values; BOOL _negate; } _predicate; unsigned int _initDepth; BOOL _postOrder; } _range;
    struct iterator { struct Usd_PrimData *_underlyingIterator; struct UsdPrimRange *_range; struct SdfPath { struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPrimTag, 24, 8>::Handle, true, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _primPart; struct Sdf_PathNodeHandleImpl<pxrInternal__aapl__pxrReserved__::Sdf_Pool<pxrInternal__aapl__pxrReserved__::Sdf_PathPropTag, 24, 8>::Handle, false, const pxrInternal__aapl__pxrReserved__::Sdf_PathNode> { struct Handle { unsigned int value; } _poolHandle; } _propPart; } _proxyPrimPath; unsigned int _depth; BOOL _pruneChildrenFlag; BOOL _isPost; } _it;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)nextObject;
- (id).cxx_construct;
- (id)initWithScene:(const void *)a0;
- (id)initWithPrim:(const void *)a0;
- (id)initWithPrim:(const void *)a0 withPredicate:(struct Usd_PrimFlagsPredicate { struct bitset<15UL> { unsigned long long x0; } x0; struct bitset<15UL> { unsigned long long x0; } x1; BOOL x2; })a1;
- (id)initWithScene:(const void *)a0 withPredicate:(struct Usd_PrimFlagsPredicate { struct bitset<15UL> { unsigned long long x0; } x0; struct bitset<15UL> { unsigned long long x0; } x1; BOOL x2; })a1;
- (id)initWithSubtreeRange:(const void *)a0;

@end
