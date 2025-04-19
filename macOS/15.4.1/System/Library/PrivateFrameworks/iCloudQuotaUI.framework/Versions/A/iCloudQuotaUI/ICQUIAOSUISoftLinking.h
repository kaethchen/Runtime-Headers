@class NSString, NSWindow, iCloudAccountDetailsWebTabView;

@interface ICQUIAOSUISoftLinking : NSObject <iCloudPrefDelegate>

@property (retain, nonatomic) NSWindow *mainWindow;
@property (retain, nonatomic) iCloudAccountDetailsWebTabView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)updateiCloudPluginWithWindow:(id)a0 visibleAccountID:(id)a1;

@end
