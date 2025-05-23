@interface PSIIntArray : NSObject {
    struct sqlite3_intarray { } *_elementArray;
    long long _staticElementBuffer[256];
    long long *_elementBuffer;
    unsigned long long _elementBufferSize;
    BOOL _freeOnUnprepare;
}

@property (readonly, nonatomic) long long *elementBuffer;

- (void)dealloc;
- (void)unprepare;
- (void)unbind;
- (void)_prepareForNumberOfElements:(unsigned long long)a0;
- (void)_unprepare;
- (void)bindElements:(struct __CFSet { } *)a0;
- (void)bindElements:(const long long *)a0 numberOfElements:(unsigned long long)a1;
- (void)bindElements:(struct __CFArray { } *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)initWithLabel:(id)a0 database:(struct sqlite3 { } *)a1;
- (void)prepareForNumberOfElements:(unsigned long long)a0;

@end
