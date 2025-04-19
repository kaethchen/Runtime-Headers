@class AMSUIWebJSProperties, NSString, AMSUIWebClientContext, AMSUIWebJSAppQueryManager, AMSUIWebView;
@protocol AMSUIWebJSTelephonyProtocol;

@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSAppQueryManagerDelegate, AMSUIWebJSPropertiesDelegate, AMSUIWebJSTelephonyDelegate> {
    AMSUIWebJSAppQueryManager *_appQueryManager;
}

@property (weak) AMSUIWebView *webView;
@property (weak) AMSUIWebClientContext *context;
@property (retain) AMSUIWebJSProperties *properties;
@property (retain) NSString *otpIdentifier;
@property (readonly) AMSUIWebJSAppQueryManager *appQueryManager;
@property (readonly) id<AMSUIWebJSTelephonyProtocol> telephony;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)_observeNotifications;
- (void)_subscriptionStatusChangeMusic:(id)a0;
- (void)appQueryManager:(id)a0 didReceiveApps:(id)a1;
- (BOOL)stopOTPListener;
- (BOOL)_canInteractWithJS;
- (void)_postMediaQueryResultsChangeEventWithApps:(id)a0;
- (void)_postSubscriptionChangedWithType:(long long)a0;
- (void)_postTelephonyDidChangeEvent;
- (void)_purchaseDidSucceed:(id)a0;
- (void)_safariDataUpdate:(id)a0;
- (void)_subscriptionStatusChangeActivity:(id)a0;
- (void)_subscriptionStatusChangeAppStore:(id)a0;
- (void)_subscriptionStatusChangeHWBundle:(id)a0;
- (void)_subscriptionStatusChangeNews:(id)a0;
- (void)_subscriptionStatusChangeTV:(id)a0;
- (void)_subscriptionStatusChangeiCloud:(id)a0;
- (id)_syncPropertiesScriptWithProperties:(id)a0;
- (id)createWebView;
- (id)loadPageModelWithInfo:(id)a0;
- (id)loadPageRenderData;
- (id)postEvent:(id)a0 options:(id)a1;
- (void)propertiesDidChange:(id)a0;
- (id)runJSRequest:(id)a0;
- (id)runSafariCallback:(id)a0;
- (BOOL)startOTPListener;
- (id)syncProperties;

@end
