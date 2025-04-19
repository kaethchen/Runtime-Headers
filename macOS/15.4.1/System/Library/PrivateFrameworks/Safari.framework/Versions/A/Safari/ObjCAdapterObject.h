@interface ObjCAdapterObject : NSObject {
    void *_objectPointer;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithObjectPointer:(void *)a0;
- (void *)objectPointer;

@end
