@interface ABNoWindowDragTextField : NSTextField

@property (nonatomic) BOOL forceNonVibrant;

- (BOOL)allowsVibrancy;
- (BOOL)mouseDownCanMoveWindow;

@end
