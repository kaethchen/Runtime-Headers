@interface __CFNCoreLoggable : NSObject <__CFNCoreLoggableReq> {
    struct CoreLoggable { void /* function */ **x0; } *_loggable;
}

- (void)dealloc;
- (id)_initWithObject:(id)a0 name:(const char *)a1;
- (id)initWithLoggableName:(const char *)a0;
- (const struct CoreLoggable { void /* function */ **x0; } *)loggable;

@end
