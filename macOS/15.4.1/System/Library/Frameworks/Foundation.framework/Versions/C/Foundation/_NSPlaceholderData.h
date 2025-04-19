@interface _NSPlaceholderData : NSData

- (oneway void)release;
- (id)init;
- (id)retain;
- (unsigned long long)retainCount;
- (id)initWithBytes:(void *)a0 length:(unsigned long long)a1 copy:(BOOL)a2 deallocator:(id /* block */)a3;
- (id)initWithData:(id)a0;

@end
