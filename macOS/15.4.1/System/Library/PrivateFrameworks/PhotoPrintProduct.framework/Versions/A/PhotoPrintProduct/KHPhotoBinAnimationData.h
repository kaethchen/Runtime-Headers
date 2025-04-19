@class KHProjectPhoto, KHFrame;

@interface KHPhotoBinAnimationData : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceClippingRect;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } sourceAffineTransform;
@property (nonatomic) double sourceTransform;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } destinationClippingRect;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } destinationAffineTransform;
@property (nonatomic) double destinationTransform;
@property (nonatomic) struct CGPath { } *destinationClippingPath;
@property (retain, nonatomic) KHProjectPhoto *photo;
@property (retain, nonatomic) KHFrame *element;
@property (nonatomic) double animationDuration;
@property (nonatomic) long long zOrder;
@property (nonatomic) struct CGSize { double width; double height; } animatableSize;
@property (nonatomic) int animationStyle;

- (id)description;
- (void).cxx_destruct;
- (void)_calculateDestinationRect;

@end
