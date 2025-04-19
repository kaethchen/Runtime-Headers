@interface NSTabBarScrollView : NSScrollView

+ (Class)_horizontalScrollerClass;
+ (Class)_verticalScrollerClass;

- (BOOL)_isConcurrentScrollingCompatible;

@end
