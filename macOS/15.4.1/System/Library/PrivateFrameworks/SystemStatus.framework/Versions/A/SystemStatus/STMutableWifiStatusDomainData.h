@class NSString;

@interface STMutableWifiStatusDomainData : STWifiStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (nonatomic, getter=isWifiActive) BOOL wifiActive;
@property (nonatomic) unsigned long long signalStrengthBars;
@property (nonatomic, getter=isAssociatedToIOSHotspot) BOOL associatedToIOSHotspot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSignalStrengthBars:(unsigned long long)a0;
- (void)setWifiActive:(BOOL)a0;
- (BOOL)applyDiff:(id)a0;
- (void)setAssociatedToIOSHotspot:(BOOL)a0;

@end
