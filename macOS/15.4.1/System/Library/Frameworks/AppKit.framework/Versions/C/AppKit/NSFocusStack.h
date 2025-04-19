@interface NSFocusStack : NSObject {
    struct __CFArray { } *_stack;
    long long _topIndex;
    struct { unsigned char _noAltHandler : 1; unsigned int _reserved : 31; } _fsFlags;
}

+ (id)currentFocusStack;

- (void)dealloc;
- (id)description;
- (id)init;
- (void)fixInvalidatedFocusForFocusView;
- (void)focusView:(id)a0 inWindow:(id)a1;
- (id)focusedView;
- (void)invalidateFocus:(id)a0;
- (BOOL)isWindowInFocusStack:(id)a0;
- (void)performWithFocusView:(id)a0 inWindow:(id)a1 usingBlock:(id /* block */)a2;
- (void)popTopView;
- (void)removeFreedView:(id)a0;
- (void)removeFreedWindow:(id)a0;
- (void)unfocusView:(id)a0;

@end
