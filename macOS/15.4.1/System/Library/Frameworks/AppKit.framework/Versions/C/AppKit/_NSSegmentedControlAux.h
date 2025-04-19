@class NSLayoutConstraint;

@interface _NSSegmentedControlAux : NSObject {
    struct CGSize { double width; double height; } _cachedMinIntrinsicContentSize;
    NSLayoutConstraint *_minWidthConstraint;
    NSLayoutConstraint *_minHeightConstraint;
}

@end
