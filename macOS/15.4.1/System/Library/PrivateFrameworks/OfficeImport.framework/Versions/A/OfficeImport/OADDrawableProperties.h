@class OADHyperlink, NSString, OADOrientedBounds;

@interface OADDrawableProperties : OADProperties {
    OADOrientedBounds *mOrientedBounds;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    NSString *mTitle;
    NSString *mDescription;
    unsigned char mHasAspectRatioLocked : 1;
    unsigned char mAspectRatioLocked : 1;
    unsigned char mHasWrdInline : 1;
    unsigned char mWrdInline : 1;
}

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaults;
- (id)altDescription;
- (id)altTitle;
- (id)clickHyperlink;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)a0;
- (BOOL)hasAltDescription;
- (BOOL)hasAltTitle;
- (BOOL)hasAspectRatioLocked;
- (BOOL)hasClickHyperlink;
- (BOOL)hasHoverHyperlink;
- (BOOL)hasOrientedBounds;
- (BOOL)hasWrdInline;
- (id)hoverHyperlink;
- (BOOL)isAspectRatioLocked;
- (BOOL)isWrdInline;
- (id)orientedBounds;
- (id)orientedBoundsForCharts;
- (void)removeUnnecessaryOverrides;
- (void)setAltDescription:(id)a0;
- (void)setAltTitle:(id)a0;
- (void)setAspectRatioLocked:(BOOL)a0;
- (void)setClickHyperlink:(id)a0;
- (void)setHoverHyperlink:(id)a0;
- (void)setOrientedBounds:(id)a0;
- (void)setWrdInline:(BOOL)a0;

@end
