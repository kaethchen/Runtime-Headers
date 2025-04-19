@interface IOBufferMutableData : NSMutableData {
    void *_bytes;
    unsigned long long _length;
    unsigned int _bufferID;
}

@property (copy) id /* block */ deallocator;

- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (void).cxx_destruct;
- (void *)mutableBytes;
- (void)setLength:(unsigned long long)a0;
- (void)setID:(unsigned int)a0;
- (unsigned int)bufferID;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1 bufferID:(unsigned int)a2 deallocator:(id /* block */)a3;

@end
