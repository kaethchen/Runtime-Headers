@interface PrivacyProxyDisabledStatusSection : PrivacyProxyStatusSection

- (void)_initSubviews;
- (void)_turnOnPrivacyProxy;
- (void)updateWithPrivacyProxyEnabledInICloudSettings:(BOOL)a0 restrictedToTrackersOnly:(BOOL)a1;

@end
