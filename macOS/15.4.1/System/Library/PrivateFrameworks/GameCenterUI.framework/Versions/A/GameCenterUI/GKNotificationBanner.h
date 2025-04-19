@interface GKNotificationBanner : NSObject

+ (void)showBannerWithTitle:(id)a0 message:(id)a1 completionHandler:(id /* block */)a2;
+ (void)showAchievementBannerWithTitle:(id)a0 achievementImage:(id)a1 message:(id)a2 touchHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 image:(id)a1 message:(id)a2 completionHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 image:(id)a1 message:(id)a2 touchHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 message:(id)a1 duration:(double)a2 completionHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 message:(id)a1 touchHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
+ (void)showBannerWithTitle:(id)a0 player:(id)a1 image:(id)a2 message:(id)a3 completionHandler:(id /* block */)a4 touchHandler:(id /* block */)a5;
+ (void)showBannerWithTitle:(id)a0 player:(id)a1 message:(id)a2 completionHandler:(id /* block */)a3;
+ (void)showWelcomeBannerWithTitle:(id)a0 message:(id)a1 touchHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

@end
