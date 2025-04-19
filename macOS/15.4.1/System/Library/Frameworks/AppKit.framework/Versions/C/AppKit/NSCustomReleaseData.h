@interface NSCustomReleaseData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
    id /* block */ _releaseBytesBlock;
}

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 releaseBytesBlock:(id /* block */)a2;

@end
