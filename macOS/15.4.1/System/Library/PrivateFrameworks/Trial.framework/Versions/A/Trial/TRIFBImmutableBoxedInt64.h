@class AFBBufRef;

@interface TRIFBImmutableBoxedInt64 : TRIFBBoxedInt64 <AFBBufferReferencing> {
    AFBBufRef *_br;
    const struct BoxedInt64 { long long x0; } *_ptr;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (long long)val;
- (const struct BoxedInt64 { long long x0; } *)cppPointer;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;

@end
