@class NSMutableDictionary;

@interface _NSUndoBeginMark : _NSUndoObject {
    id _groupIdentifier;
    BOOL _isDiscardable;
    NSMutableDictionary *_userInfo;
}

- (void)dealloc;
- (id)description;
- (id)userInfo;
- (void)setUserInfo:(id)a0;
- (id)groupIdentifier;
- (void)setDiscardable:(BOOL)a0;
- (BOOL)isBeginMark;
- (BOOL)isDiscardable;
- (void)setGroupIdentifier:(id)a0;

@end
