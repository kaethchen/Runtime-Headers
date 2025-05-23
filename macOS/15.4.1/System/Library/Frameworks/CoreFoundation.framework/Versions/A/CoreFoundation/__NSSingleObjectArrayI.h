@interface __NSSingleObjectArrayI : NSArray {
    id _object;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToArray:(id)a0;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)firstObject;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)lastObject;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectEnumerator;

@end
