@interface _NSInlineData : NSData {
    unsigned short _length;
}

+ (id)_allocWithExtraBytes:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (unsigned long long)length;
- (BOOL)_isCompact;
- (const void *)bytes;
- (id)_createDispatchData;
- (BOOL)_providesConcreteBacking;
- (id)initWithCoder:(id)a0;

@end
