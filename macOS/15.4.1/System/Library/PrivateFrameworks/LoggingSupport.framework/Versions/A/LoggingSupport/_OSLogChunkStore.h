@class NSString;

@interface _OSLogChunkStore : NSObject {
    const void *_ptr;
    unsigned long long _sz;
}

@property (copy, nonatomic) NSString *fileName;

- (void).cxx_destruct;
- (void)enumerateChunksInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 usingBlock:(id /* block */)a1;
- (void)enumerateChunksUsingBlock:(id /* block */)a0;
- (id)initWithBytes:(const void *)a0 size:(unsigned long long)a1;

@end
