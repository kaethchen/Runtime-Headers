@interface _OSLogChunkMemory : _OSLogChunkStore {
    id /* block */ _deallocator;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBytes:(const void *)a0 size:(unsigned long long)a1 deallocator:(id /* block */)a2;

@end
