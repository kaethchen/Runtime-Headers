@class _AXFStackNode;

@interface _AXFStackQueueEnumerator : NSEnumerator {
    _AXFStackNode *_currentListMember;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithListMember:(id)a0;

@end
