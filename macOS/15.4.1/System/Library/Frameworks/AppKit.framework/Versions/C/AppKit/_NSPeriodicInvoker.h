@interface _NSPeriodicInvoker : NSObject {
    BOOL _cancelled;
    BOOL *_enabled;
    id /* block */ _delay;
    id /* block */ _work;
    id /* block */ _helper;
}

- (void)dealloc;
- (void)cancel;
- (void)setDelayFunction:(id /* block */)a0;
- (void)setWorkBlock:(id /* block */)a0;

@end
