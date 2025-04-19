@class WLKAppSettings;

@interface WLKAppSettingsFacade : NSObject {
    WLKAppSettings *_settings;
}

- (void).cxx_destruct;
- (id)settings;
- (id)initWithSettings:(id)a0;
- (id)accessStatus;
- (void)setAccessStatus:(id)a0;

@end
