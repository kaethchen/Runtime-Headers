@class NSInvocation;

@interface _NSUndoInvocation : _NSUndoObject {
    NSInvocation *_invocation;
}

- (void)dealloc;
- (id)description;
- (void)invoke;
- (id)initWithTarget:(id)a0 invocation:(id)a1;

@end
