@interface ABObjectDeathWatcher : NSObject {
    void *_objectPointer;
    id /* block */ _block;
}

+ (void)watchObjectForDeath:(id)a0 withBlock:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithObject:(id)a0 block:(id /* block */)a1;

@end
