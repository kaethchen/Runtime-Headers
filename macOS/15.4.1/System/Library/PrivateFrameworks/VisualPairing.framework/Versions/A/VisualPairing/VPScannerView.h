@interface VPScannerView : NSView

@property (nonatomic) long long autoFocusRangeRestriction;
@property (nonatomic) long long focusMode;
@property (copy, nonatomic) id /* block */ scannedCodeHandler;
@property (readonly, nonatomic) double viewFinderDiameter;
@property (nonatomic) BOOL fillLayerBoundsWithVideo;

- (void).cxx_destruct;
- (void)start;
- (void)stop;

@end
