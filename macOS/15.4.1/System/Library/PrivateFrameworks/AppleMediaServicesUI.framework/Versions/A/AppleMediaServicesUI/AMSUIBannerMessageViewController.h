@class AMSBinaryPromise, NSString, AMSUIBannerAppearance;

@interface AMSUIBannerMessageViewController : AMSUIBaseMessageViewController <AMSUIMessageViewController>

@property (retain) AMSUIBannerAppearance *requestAppearance;
@property (retain) AMSUIBannerAppearance *preferredAppearance;
@property unsigned long long impressionsReportingFrequency;
@property (retain) AMSBinaryPromise *loadPromise;
@property BOOL shouldAutomaticallyReportMetrics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_titleFont;
- (id)initWithRequest:(id)a0;
- (id)_titleTextColor;
- (void)_commitAppearance;
- (id)_defaultPreferredImageSymbolConfiguration;
- (id)_effectiveImageSymbolConfiguration;
- (long long)_iconAnimationPlayCount;
- (id)_messageFont;
- (unsigned long long)_messageStyle;
- (id)_messageTextColor;
- (long long)_primaryImageRenderingMode;
- (void)_setDialogRequest:(id)a0;
- (id)initWithRequest:(id)a0 bag:(id)a1 account:(id)a2;

@end
