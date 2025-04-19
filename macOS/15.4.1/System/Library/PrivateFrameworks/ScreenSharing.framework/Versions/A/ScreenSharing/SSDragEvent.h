@class NSString;
@protocol SSDragDelegate;

@interface SSDragEvent : SSInputEvent

@property int dragType;
@property (copy) NSString *dragPasteboardName;
@property BOOL draggingFilePromisesFromServer;
@property id<SSDragDelegate> dragDelegate;

+ (id)dragEventWithDragType:(int)a0 dragPasteboardName:(id)a1 draggingFilePromisesFromServer:(BOOL)a2 withEvent:(id)a3;
+ (id)dragEventWithDragType:(int)a0 withDragInfo:(id)a1 withEvent:(id)a2;

- (void)dealloc;
- (id)initWithDragType:(int)a0 dragPasteboardName:(id)a1 draggingFilePromisesFromServer:(BOOL)a2 withEvent:(id)a3;

@end
