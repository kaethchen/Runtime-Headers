@class NSString, NSView, NSTextView, NSButton;

@interface IKICInfoHandler : NSObject

@property NSView *view;
@property NSTextView *info;
@property NSButton *saveButton;
@property NSString *infoStr;
@property BOOL busy;
@property BOOL prefsAreUpToDate;

+ (id)sharedInfoHandler;

- (void)addProcessInfo:(id)a0;
- (void)addAutoLaunchInfo:(id)a0 devices:(id)a1;
- (void)addCameraInfo:(id)a0 camera:(id)a1;
- (void)addCurentDeviceInfo:(id)a0 devices:(id)a1;
- (void)addDevInfo:(id)a0 device:(id)a1;
- (void)addDeviceBrowserInfo:(id)a0 master:(id)a1;
- (void)addDeviceInfo:(id)a0 devices:(id)a1;
- (void)addPreferenceInfo:(id)a0;
- (void)addScannerInfo:(id)a0 scanner:(id)a1;
- (BOOL)infoEnabled;
- (void)installInView:(id)a0;
- (void)refreshICInfo:(id)a0;
- (void)removeObsoletePrefs;
- (void)saveICInfo:(id)a0;

@end
