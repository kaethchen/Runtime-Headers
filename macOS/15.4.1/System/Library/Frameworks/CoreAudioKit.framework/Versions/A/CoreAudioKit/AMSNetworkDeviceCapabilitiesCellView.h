@class NSImageView;

@interface AMSNetworkDeviceCapabilitiesCellView : NSTableCellView

@property (readonly, retain) NSImageView *hasAudioImage;
@property (readonly, retain) NSImageView *hasVideoImage;
@property (readonly, retain) NSImageView *hasMidiImage;
@property (readonly, retain) NSImageView *authorizationImage;

+ (void)initialize;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundStyle:(long long)a0;

@end
