@class _NSUndoObject;

@interface _NSUndoStack : NSObject {
    unsigned long long _max;
    unsigned long long _count;
    unsigned long long _nestingLevel;
    _NSUndoObject *_head;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (unsigned long long)count;
- (void)removeAllObjects;
- (void)removeObject:(id)a0;
- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (id)groupIdentifier;
- (void)markEnd;
- (unsigned long long)max;
- (void)setDiscardable:(BOOL)a0;
- (void)setMax:(unsigned long long)a0;
- (id)_beginMark;
- (void)_removeBottom;
- (BOOL)isDiscardable;
- (void)markBegin;
- (unsigned long long)nestingLevel;
- (BOOL)popAndInvoke;
- (id)popUndoObject;
- (void)push:(id)a0;
- (void)removeAllObjectsWithTarget:(id)a0;
- (void)setGroupIdentifier:(id)a0;
- (unsigned long long)topLevelGroupCount;
- (id)topUndoObject;

@end
