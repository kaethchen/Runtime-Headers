@interface _NSUndoBlockInvocation : _NSUndoObject {
    id /* block */ _handler;
}

- (void)dealloc;
- (void)invoke;
- (id)initWithTarget:(id)a0 handler:(id /* block */)a1;

@end
