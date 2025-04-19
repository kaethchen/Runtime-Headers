@class AFBBufRef;

@interface TRIFBImmutableBoxedBool : TRIFBBoxedBool <AFBBufferReferencing> {
    AFBBufRef *_br;
    const struct BoxedBool { unsigned char x0; } *_ptr;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)val;
- (const struct BoxedBool { unsigned char x0; } *)cppPointer;
- (id)initWithBufRef:(id)a0 rawPointer:(const void *)a1;

@end
