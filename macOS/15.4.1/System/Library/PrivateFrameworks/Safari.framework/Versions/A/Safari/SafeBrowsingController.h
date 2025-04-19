@interface SafeBrowsingController : NSObject

@property (class, nonatomic, getter=isSafeBrowsingEnabled) BOOL safeBrowsingEnabled;

+ (id)_safeBrowsingPreferencesPlistURL;
+ (void)_startObservingSafeBrowsingStateIfNeeded;
+ (void)_updateWebViewPreferences:(BOOL)a0;

@end
