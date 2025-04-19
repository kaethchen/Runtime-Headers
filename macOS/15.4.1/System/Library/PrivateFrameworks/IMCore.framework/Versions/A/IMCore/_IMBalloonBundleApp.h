@interface _IMBalloonBundleApp : IMBalloonApp {
    Class _bubbleClass;
    Class _browserClass;
    Class _dataSourceClass;
}

- (void).cxx_destruct;
- (void)_loadBundle;
- (Class)dataSourceClass;
- (void)setBubbleClass:(Class)a0;
- (id)initWithPluginBundle:(id)a0 appBundle:(id)a1;
- (void)_loadAppBundle;
- (Class)browserClass;
- (Class)bubbleClass;
- (BOOL)isPreDawnAndAppStoreStickerGenre;
- (BOOL)isStickerPackOnly;
- (double)presentationDelay;
- (void)setBrowserClass:(Class)a0;
- (void)setDataSourceClass:(Class)a0;
- (BOOL)shouldDelayViewControllerPresentation;
- (BOOL)shouldForceIntoSendMenu;

@end
