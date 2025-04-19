@interface PXPhotosSearchBodyContainerInfo : NSObject

@property (nonatomic) struct CGSize { double width; double height; } containerSize;
@property (copy, nonatomic) id /* block */ containerSizeDidChange;

- (void).cxx_destruct;

@end
