@class CALayer, SiriSharedUINotificationCenterPlatterRimLayer, SiriSharedUINotificationCenterPlatterMaterialLayer;

@interface SiriSharedUINotificationCenterPlatterLayer : CALayer {
    CALayer *_shadowLayer;
    CALayer *_innerRim;
    SiriSharedUINotificationCenterPlatterRimLayer *_rim;
    SiriSharedUINotificationCenterPlatterMaterialLayer *_materialLayer;
    unsigned char _materialStyle;
    BOOL _isDark;
    double _cornerRadius;
}

@property (nonatomic) BOOL enableLayerActionsOnNextLayout;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (id)_createInnerRimLayer;
- (id)_createShadowLayer;
- (void)recreateSubLayersWithMaterial:(unsigned long long)a0 style:(unsigned char)a1 cornerRadius:(double)a2;

@end
