@class _PGDevice;

@interface PGRootTaskMapping : PGMapping {
    _PGDevice *_device;
}

- (void)dealloc;
- (id)initWithVirtualAddress:(void *)a0 length:(unsigned long long)a1 device:(id)a2;

@end
