@class ICDevice;
@protocol IKDeviceBrowserViewDelegate;

@interface IKDeviceBrowserView : NSView {
    id _privateData;
}

@property BOOL isInitialized;
@property BOOL displaysAccessoryView;
@property id<IKDeviceBrowserViewDelegate> delegate;
@property BOOL displaysLocalCameras;
@property BOOL displaysNetworkCameras;
@property BOOL displaysLocalScanners;
@property BOOL displaysNetworkScanners;
@property long long mode;
@property (readonly) ICDevice *selectedDevice;

+ (BOOL)isCompatibleWithResponsiveScrolling;

- (void)dealloc;
- (void)finalize;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)valueForUndefinedKey:(id)a0;
- (void)awakeFromNib;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setSelectedDevice:(id)a0;
- (void)commonInit:(id)a0;
- (id)deviceBrowser;
- (void)drawRect_ib:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)installView:(id)a0;
- (id)resizeView;
- (void)setHidesAccessoryView:(BOOL)a0;
- (void)setHidesExtrasContainer:(BOOL)a0;
- (void)setHidesResizeView:(BOOL)a0;
- (id)takeoverICDeviceBrowser;

@end
