@class AFBBufRef;

@interface TRIFBImmutableBoxedDouble : TRIFBBoxedDouble <AFBBufferReferencing> {
    AFBBufRef *_br;
    const struct BoxedDouble { double x0; } *_ptr;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (double)val;
- (const struct BoxedDouble { double x0; } *)cppPointer;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;

@end
