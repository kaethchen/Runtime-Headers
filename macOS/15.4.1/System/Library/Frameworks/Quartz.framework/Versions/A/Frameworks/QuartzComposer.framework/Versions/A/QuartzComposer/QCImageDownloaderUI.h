@class NSButton, NSTextField;

@interface QCImageDownloaderUI : QCInspector {
    NSTextField *cacheSize;
    NSButton *syncButton;
}

+ (id)viewNibName;

- (void)setupViewForPatch:(id)a0;
- (void)updateCache:(id)a0;
- (void)updateSync:(id)a0;

@end
