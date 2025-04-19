@interface UINSCursor : NSCursor <UINSCursor>

@property (nonatomic) long long type;

+ (id)IBeamCursor;
+ (id)IBeamCursorForVerticalLayout;
+ (id)arrowCursor;
+ (id)closedHandCursor;
+ (id)openHandCursor;
+ (id)pointingHandCursor;
+ (id)resizeDownCursor;
+ (id)resizeLeftCursor;
+ (id)resizeLeftRightCursor;
+ (id)resizeRightCursor;
+ (id)resizeUpCursor;
+ (id)resizeUpDownCursor;
+ (id)cursorWithType:(long long)a0;

@end
