@class NSImage, NSPasteboard, NSFilePromiseDragSource;
@protocol NSDraggingSource;

@interface NSDraggingSession : NSObject {
    void *_private;
    NSPasteboard *_pboard;
    NSImage *_compositeImageCache;
    BOOL _animatesOnCancelOrFail;
}

@property (retain) id localContext;
@property unsigned long long dragRef;
@property id alternateDragSource;
@property (readonly) id<NSDraggingSource> source;
@property (readonly) NSFilePromiseDragSource *filePromiseDragSource;
@property struct CGPoint { double x; double y; } startLocation;
@property struct CGPoint { double x0; double x1; } draggingLocation;
@property struct CGPoint { double x; double y; } draggingImageOffset;
@property long long draggingFormation;
@property BOOL animatesToStartingPositionsOnCancelOrFail;
@property long long draggingLeaderIndex;
@property (readonly) NSPasteboard *draggingPasteboard;
@property (readonly) long long draggingSequenceNumber;

- (void)dealloc;
- (id)_compositeImage;
- (id)_commonInitWithPasteboard:(id)a0 source:(id)a1;
- (id)_initWithPasteboard:(id)a0 draggingItems:(id)a1 clippingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 source:(id)a3;
- (id)_initWithPasteboard:(id)a0 image:(id)a1 offset:(struct CGPoint { double x0; double x1; })a2 source:(id)a3;
- (BOOL)animatesToDraggingFormationOnBeginDrag;
- (void)enumerateDraggingItemsForClass:(Class)a0 view:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateDraggingItemsWithOptions:(unsigned long long)a0 forView:(id)a1 classes:(id)a2 searchOptions:(id)a3 usingBlock:(id /* block */)a4;
- (struct CGPoint { double x0; double x1; })locationForSlideBack;
- (void)setAnimatesToDraggingFormationOnBeginDrag:(BOOL)a0;
- (struct CGPoint { double x0; double x1; })setDraggingLocation;
- (void)setLocationForSlideBack:(struct CGPoint { double x0; double x1; })a0;

@end
