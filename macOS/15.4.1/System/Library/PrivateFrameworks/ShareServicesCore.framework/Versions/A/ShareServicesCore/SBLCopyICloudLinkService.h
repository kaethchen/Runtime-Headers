@interface SBLCopyICloudLinkService : NSSharingService

+ (void)_performActionWithAssets:(id)a0 shouldIncludeLocationData:(BOOL)a1;
+ (BOOL)canPerformWithAssets:(id)a0;

- (id)init;
- (id)initWithTitle:(id)a0 image:(id)a1 alternateImage:(id)a2 handler:(id /* block */)a3;
- (id)initWithAssets:(id)a0 shouldIncludeLocationData:(BOOL)a1;

@end
