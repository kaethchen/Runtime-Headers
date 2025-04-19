@class AXVMouseCursor;

@interface AXVMouseCursorManager : NSObject

@property (class, readonly, nonatomic) AXVMouseCursor *sharedMouseCursorA;
@property (class, readonly, nonatomic) AXVMouseCursor *sharedMouseCursorB;

@end
