@interface MDLAnimatedVector3 : MDLAnimatedValue

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)precision;
- (unsigned long long)getFloat3Array:(void *)a0 maxCount:(unsigned long long)a1;
- (struct VtValue { struct type { unsigned char x0[8]; } x0; struct TfPointerAndBits<const pxrInternal__aapl__pxrReserved__::VtValue::_TypeInfo> { struct _TypeInfo *x0; } x1; })defaultVtValue;
- (void /* unknown type, empty encoding */)double3AtTime:(double)a0;
- (void /* unknown type, empty encoding */)float3AtTime:(double)a0;
- (unsigned long long)getDouble3Array:(void *)a0 maxCount:(unsigned long long)a1;
- (void)resetWithDouble3Array:(const void *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithFloat3Array:(const void *)a0 atTimes:(const double *)a1 count:(unsigned long long)a2;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1;
- (void)resetWithUsdAttribute:(const void *)a0 timeScale:(double)a1 time:(double)a2;
- (void)setDouble3:(SEL)a0 atTime:(double)a1;
- (void)setFloat3:(SEL)a0 atTime:(double)a1;

@end
