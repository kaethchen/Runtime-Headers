@class NSSet;
@protocol NSDraggingDestination;

@interface PHProjectExtensionDragStealingWindow : NSWindow

@property (copy, nonatomic) NSSet *photosDragTypes;
@property (weak, nonatomic) id<NSDraggingDestination> stealingDraggingDestination;

- (void).cxx_destruct;
- (id)_findDragTargetFrom:(id)a0;
- (BOOL)_containsPhotosDragTypes:(id)a0;

@end
