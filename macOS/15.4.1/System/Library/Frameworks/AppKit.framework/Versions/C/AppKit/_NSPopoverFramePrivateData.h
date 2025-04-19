@class NSTextField, NSLayoutConstraint, NSImage, NSFloatRange, _NSPopoverFrameAXBackgroundView, NSButton, NSMutableArray;

@interface _NSPopoverFramePrivateData : NSObject {
    NSTextField *titleTextField;
    NSButton *closeButton;
    NSMutableArray *transientConstraints;
    NSLayoutConstraint *separationConstraint;
    NSFloatRange *rangeOfInterest1;
    NSFloatRange *rangeOfInterest2;
    NSImage *dragImage;
    unsigned long long anchorEdge;
    struct CGSize { double width; double height; } anchorSize;
    unsigned long long previousAnchorEdge;
    struct CGPoint { double x; double y; } previousAnchorPoint;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } contentInset;
    struct CGPoint { double x; double y; } anchorPoint;
    BOOL _usesLayerMasking;
    struct { unsigned char animatedIn : 1; unsigned char animatedInWithTitle : 1; unsigned char animating : 1; unsigned int _reserved : 29; } flags;
}

@property (retain) NSImage *cachedMaskImage;
@property (retain) id cachedCornerPath;
@property double cachedCornerRadius;
@property (retain) NSImage *cachedCornerImage;
@property (retain) _NSPopoverFrameAXBackgroundView *axBackgroundView;

- (void)dealloc;

@end
