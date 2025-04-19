@class NSTabBarItem, NSImage, NSString, NSWindow;

@interface NSMutableTabDraggingInfo : NSObject <NSTabDraggingInfo>

@property (retain, nonatomic) NSWindow *draggingDestinationWindow;
@property (nonatomic) unsigned long long draggingSourceOperationMask;
@property (nonatomic) struct CGPoint { double x; double y; } draggingLocation;
@property (retain, nonatomic) NSImage *draggedImage;
@property (retain, nonatomic) id draggingSource;
@property (retain, nonatomic) NSTabBarItem *draggingItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
