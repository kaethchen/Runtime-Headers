@class NSString, NSMutableArray;

@interface UINSDragManager : NSObject <NSDraggingSource>

@property (retain) NSMutableArray *sessions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedDragManager;

- (id)init;
- (void).cxx_destruct;
- (void)draggingSession:(id)a0 endedAtPoint:(struct CGPoint { double x0; double x1; })a1 operation:(unsigned long long)a2;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (long long)_indexForDraggingSession:(id)a0;
- (void)beginDragInScene:(id)a0 withItems:(id)a1 handler:(id)a2;

@end
