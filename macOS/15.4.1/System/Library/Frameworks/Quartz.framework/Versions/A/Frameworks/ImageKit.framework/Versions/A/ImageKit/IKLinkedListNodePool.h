@class NSMutableArray, IKLinkedList;

@interface IKLinkedListNodePool : NSObject {
    IKLinkedList *_freeNodes;
    NSMutableArray *_nodePool;
}

- (void)dealloc;
- (id)init;
- (void)releaseNode:(id)a0;
- (id)node;
- (void)free;

@end
