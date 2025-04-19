@interface _NSUndoObject : NSObject {
    _NSUndoObject *next;
    _NSUndoObject *previous;
    id _target;
}

- (id)init;
- (void)invoke;
- (id)target;
- (id)initWithTarget:(id)a0;
- (BOOL)isBeginMark;
- (BOOL)isEndMark;

@end
