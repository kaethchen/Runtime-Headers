@class NSString;

@interface NSDraggingImageComponent : NSObject

@property (copy) NSString *key;
@property (retain) id contents;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;

+ (id)_imageComponentWithCoreDragComponent:(id)a0;
+ (id)draggingImageComponentWithKey:(id)a0;

- (void)dealloc;
- (id)description;
- (id)image;
- (id)initWithKey:(id)a0;
- (id)_initWithCoreDragComponent:(id)a0;
- (id /* block */)animationKeyFrameBlock;

@end
