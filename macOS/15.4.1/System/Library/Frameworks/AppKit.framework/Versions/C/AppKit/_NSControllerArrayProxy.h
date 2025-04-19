@interface _NSControllerArrayProxy : NSArray {
    id _controller;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)objectsAtIndexes:(id)a0;
- (void)_setValue:(id)a0 forKeyPath:(id)a1 ofObjectAtIndex:(unsigned long long)a2;
- (BOOL)_validateValue:(id *)a0 forKeyPath:(id)a1 ofObjectAtIndex:(unsigned long long)a2 error:(id *)a3;
- (id)_valueForKeyPath:(id)a0 ofObjectAtIndex:(unsigned long long)a1;
- (void)clearController;
- (void)_invokeSelector:(SEL)a0 withArguments:(id)a1 onKeyPath:(id)a2 ofObjectAtIndex:(unsigned long long)a3;
- (id)initWithController:(id)a0;

@end
