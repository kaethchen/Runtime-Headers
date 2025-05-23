@class LPLinkRendererSizeClassParameters, NSAppearance;

@interface LPLinkSnapshotConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSAppearance *appearance;
@property (readonly, nonatomic) unsigned long long preferredSizeClass;
@property (retain, nonatomic) LPLinkRendererSizeClassParameters *sizeClassParameters;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) struct CGSize { double width; double height; } maximumSize;
@property (readonly, nonatomic) double scale;
@property (nonatomic) BOOL showDebugIndicators;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAppearance:(id)a0 preferredSizeClass:(unsigned long long)a1 maximumSize:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;
- (id)initWithAppearance:(id)a0 preferredSizeClass:(unsigned long long)a1 size:(struct CGSize { double x0; double x1; })a2 scale:(double)a3;

@end
