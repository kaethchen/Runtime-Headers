@class NSPasteboard, NSString, NSImage, NSWindow;

@interface ASKDragInfo : NSObject <NSDraggingInfo> {
    id _sender;
}

@property (readonly) NSWindow *draggingDestinationWindow;
@property (readonly) unsigned long long draggingSourceOperationMask;
@property (readonly) struct CGPoint { double x0; double x1; } draggingLocation;
@property (readonly) struct CGPoint { double x0; double x1; } draggedImageLocation;
@property (readonly) NSImage *draggedImage;
@property (readonly) NSPasteboard *draggingPasteboard;
@property (readonly) id draggingSource;
@property (readonly) long long draggingSequenceNumber;
@property long long draggingFormation;
@property BOOL animatesToDestination;
@property long long numberOfValidItemsForDrop;
@property (readonly) long long springLoadingHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dragInfoWithSender:(id)a0;

- (void)dealloc;
- (id)init;
- (id)objectSpecifier;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)a0;
- (void)slideDraggedImageTo:(struct CGPoint { double x0; double x1; })a0;
- (id)sender;
- (void)setSender:(id)a0;
- (id)initWithSender:(id)a0;

@end
