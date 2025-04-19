@interface SVXAudioServicesUtils : NSObject

- (int)_activate;
- (BOOL)audioServicesActivateWithTimeout;
- (BOOL)shouldPrewarmAudioServicesActivate;

@end
