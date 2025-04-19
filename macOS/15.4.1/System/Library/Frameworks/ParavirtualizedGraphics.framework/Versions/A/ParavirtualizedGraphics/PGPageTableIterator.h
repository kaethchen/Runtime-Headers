@class _PGDevice;

@interface PGPageTableIterator : NSObject {
    _PGDevice *_device;
    unsigned long long _root;
    unsigned int _depth;
    BOOL _allowHoles;
    id /* block */ _read;
}

- (void)dealloc;
- (id)initWithRoot:(unsigned int)a0 depth:(unsigned int)a1 allowHoles:(BOOL)a2 read:(id /* block */)a3;
- (void)visitPagesInRange:(unsigned long long)a0 length:(unsigned long long)a1 visitor:(id /* block */)a2;

@end
