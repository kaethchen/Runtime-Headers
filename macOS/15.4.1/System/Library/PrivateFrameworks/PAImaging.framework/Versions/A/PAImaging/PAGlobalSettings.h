@class NSNumber, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PAGlobalSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_settings;
}

@property (class, retain) NSNumber *mainViewerMaxFramerate;
@property (class) BOOL disableSmartToneAutoCalc;
@property (class) BOOL disableSmartColorAutoCalc;
@property (class) BOOL disableSmartBlackAndWhiteAutoCalc;
@property (class) BOOL disableWhiteBalanceAutoCalc;
@property (class) BOOL disableLevelsAutoCalc;
@property (class) BOOL disableCurvesAutoCalc;
@property (class) BOOL disableRedEyeAutoCalc;
@property (class) BOOL disableBackfillRender;
@property (class) BOOL disableBackfillPreviewRender;
@property (class) BOOL disableZoomRender;
@property (class) BOOL disableZoomPreviewRender;

+ (void)reset;
+ (id)globalSettings;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setSetting:(id)a0 forKey:(id)a1;
- (BOOL)boolSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)_settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (double)doubleSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (long long)integerSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)settingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)stringSettingForKey:(id)a0 defaultValue:(id /* block */)a1;
- (id)urlSettingForKey:(id)a0 defaultValue:(id /* block */)a1;

@end
