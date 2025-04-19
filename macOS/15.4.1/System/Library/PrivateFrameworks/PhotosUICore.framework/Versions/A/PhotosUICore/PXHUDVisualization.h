@class NSString, NSColor;
@protocol PXHUDVisualizationDelegate;

@interface PXHUDVisualization : NSObject

@property (weak, nonatomic) id<PXHUDVisualizationDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSColor *color;

- (void).cxx_destruct;
- (void)_notifyDelegateVisualizationDidChange;

@end
