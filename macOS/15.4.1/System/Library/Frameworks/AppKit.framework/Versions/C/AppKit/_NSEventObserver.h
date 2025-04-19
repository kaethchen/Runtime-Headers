@interface _NSEventObserver : NSObject {
    unsigned long long _mask;
    id _block;
}

- (void)dealloc;
- (void)invalidate;
- (id)initMatchingEvents:(unsigned long long)a0 handler:(id)a1;

@end
