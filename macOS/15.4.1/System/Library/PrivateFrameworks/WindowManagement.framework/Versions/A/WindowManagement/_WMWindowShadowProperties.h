@interface _WMWindowShadowProperties : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property float activeRadius;
@property float activeDensity;
@property float activeVerticalOffset;
@property (getter=hasActiveHardRimStyle) BOOL activeHardRimStyle;
@property float activeRimDensity;
@property (getter=hasActiveClipTop) BOOL activeClipTop;
@property float inactiveRadius;
@property float inactiveDensity;
@property float inactiveVerticalOffset;
@property (getter=hasInactiveHardRimStyle) BOOL inactiveHardRimStyle;
@property float inactiveRimDensity;
@property (getter=hasInactiveClipTop) BOOL inactiveClipTop;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
