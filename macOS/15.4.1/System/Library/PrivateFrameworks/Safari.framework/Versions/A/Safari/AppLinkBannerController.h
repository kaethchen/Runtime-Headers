@class NSString, WBSAppLink, AppLinkBanner;

@interface AppLinkBannerController : NSObject <AppLinkBannerDelegate> {
    AppLinkBanner *_appLinkBanner;
}

@property (readonly, nonatomic) WBSAppLink *appLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_okClicked:(id)a0;
- (void)getBannerWithCompletionHandler:(id /* block */)a0;
- (void)appLinkBannerCloseButtonWasClicked:(id)a0;
- (void)appLinkBannerOpenButtonWasClicked:(id)a0;
- (id)initWithAppLink:(id)a0;

@end
