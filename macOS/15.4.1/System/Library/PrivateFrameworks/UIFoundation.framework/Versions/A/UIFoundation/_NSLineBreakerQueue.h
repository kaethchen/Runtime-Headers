@interface _NSLineBreakerQueue : NSObject {
    const void **_buf;
    unsigned long long _capacity;
    unsigned long long _start;
    unsigned long long _end;
    unsigned long long _count;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (const void *)valueAtIndex:(unsigned long long)a0;
- (void)removeAllValues;
- (void)_ensureCapacity:(unsigned long long)a0;
- (void)appendValue:(const void *)a0;
- (void)enumerateValuesWithBlock:(id /* block */)a0;
- (void)removeValuesBeforeIndex:(unsigned long long)a0;

@end
