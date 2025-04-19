@interface NSPurgeableData : NSMutableData <NSDiscardableContent> {
    unsigned long long _length;
    struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; BOOL x3; BOOL x4; unsigned long long x5; } *_reserved;
    int _accessCount;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)length;
- (const void *)bytes;
- (BOOL)beginContentAccess;
- (void)discardContentIfPossible;
- (void)endContentAccess;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)initWithCapacity:(unsigned long long)a0;
- (BOOL)isContentDiscarded;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (void)_destroyMemory;

@end
