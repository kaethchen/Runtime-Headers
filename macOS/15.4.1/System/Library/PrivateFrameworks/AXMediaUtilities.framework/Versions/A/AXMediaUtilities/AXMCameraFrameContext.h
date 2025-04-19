@interface AXMCameraFrameContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic) float videoZoomFactor;
@property (readonly, nonatomic) long long videoSourceWidth;
@property (readonly, nonatomic) long long videoSourceHeight;
@property (readonly, nonatomic) double presentationTimestamp;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVideoFieldOfView:(float)a0 zoomFactor:(float)a1 sourceWidth:(long long)a2 sourceHeight:(long long)a3 presentationTimestamp:(double)a4;

@end
