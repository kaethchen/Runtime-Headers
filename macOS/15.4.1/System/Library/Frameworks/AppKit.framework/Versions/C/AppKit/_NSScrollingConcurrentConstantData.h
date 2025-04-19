@class NSView, NSString, NSScrollView, NSArray, CALayer, NSClipView, _NSScrollingPerfLogger, NSWindow;
@protocol NSScrollViewDelegate;

@interface _NSScrollingConcurrentConstantData : NSData

@property (readonly) _NSScrollingPerfLogger *perfLogger;
@property (readonly) NSWindow *window;
@property (readonly) NSScrollView *scrollView;
@property (readonly) id<NSScrollViewDelegate> scrollViewDelegate;
@property (readonly) NSClipView *clipView;
@property (readonly) CALayer *clipLayer;
@property (readonly) NSClipView *headerClipView;
@property (readonly) CALayer *headerClipLayer;
@property (readonly) NSView *documentView;
@property (readonly) CALayer *documentLayer;
@property (readonly) NSString *documentPerfCategory;
@property (readonly) struct CGSize { double width; double height; } pointsPerPixel;
@property (readonly) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } affineTransformToClipView;
@property (readonly, getter=isClipViewFlipped) BOOL clipViewFlipped;
@property (readonly) BOOL usePredominantAxisScrolling;
@property (readonly) BOOL allowsHorizontalStretching;
@property (readonly) BOOL allowsVerticalStretching;
@property (readonly) BOOL doesDelegateRespondToSynchLayers;
@property (readonly) BOOL hasSwipeForwardingResponder;
@property (readonly) unsigned long long scrollingModeHorizontal;
@property (readonly) unsigned long long scrollingModeVertical;
@property (readonly) NSArray *synchronizedSiblingsHorizontal;
@property (readonly) NSArray *synchronizedSiblingsVertical;
@property (readonly) NSArray *pageAlignmentsHorizontal;
@property (readonly) NSArray *pageAlignmentsVertical;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialDocumentFrame;
@property (readonly) struct NSEdgeInsets { double top; double left; double bottom; double right; } initialContentInsets;
@property (readonly) struct CGPoint { double x; double y; } initialOriginConstraintLoc;
@property (readonly) struct CGSize { double width; double height; } initialStretchAmount;
@property (readonly) struct CGPoint { double x; double y; } initialClipOrigin;
@property (readonly) struct CGSize { double width; double height; } initialClipSize;
@property (readonly) double decelerationRate;

+ (id)constantDataWithScrollView:(id)a0 forwardingAxis:(long long)a1;

- (void)dealloc;

@end
