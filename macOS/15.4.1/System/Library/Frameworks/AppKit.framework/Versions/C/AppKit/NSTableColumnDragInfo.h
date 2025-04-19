@class NSImage, NSView;

@interface NSTableColumnDragInfo : NSObject

@property (retain, nonatomic) NSImage *bodyDragImage;
@property (retain, nonatomic) NSView *draggedColumnView;
@property (nonatomic) double dragYPos;
@property (nonatomic) double dragImageInset;

- (void).cxx_destruct;

@end
