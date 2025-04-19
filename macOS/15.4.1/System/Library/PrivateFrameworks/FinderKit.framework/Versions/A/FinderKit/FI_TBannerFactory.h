@interface FI_TBannerFactory : NSObject

+ (id)bannerViewControllerICQMessage:(id)a0;
+ (int)bannerTypeForBanner:(id)a0;
+ (int)bannerTypeForContainerNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0 isBackupBrowser:(BOOL)a1 icqMessage:(id)a2;
+ (id)bannerViewControllerForType:(int)a0;

@end
