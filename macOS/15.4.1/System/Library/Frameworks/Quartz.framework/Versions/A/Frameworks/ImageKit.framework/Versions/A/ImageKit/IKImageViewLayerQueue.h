@class NSMutableArray;

@interface IKImageViewLayerQueue : NSObject {
    NSMutableArray *_queue;
    BOOL _isDequeueing;
    NSMutableArray *_purgatory;
}

@property id delegate;

- (void)dealloc;
- (id)init;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)_popBlockAndDisplay;
- (void)_scheduleBlockForNextRunLoopIteration;
- (BOOL)cancelDisplayForAllLayers;
- (BOOL)cancelDisplayForLayers:(id)a0;
- (void)enqueueLayerToDisplay:(id)a0;
- (void)enqueueSuccessHandler:(id /* block */)a0;

@end
