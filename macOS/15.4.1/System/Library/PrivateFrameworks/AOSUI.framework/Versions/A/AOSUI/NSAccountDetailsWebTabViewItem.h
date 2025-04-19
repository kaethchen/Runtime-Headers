@class NSView, iCloudAccountDetailsWebTabView;

@interface NSAccountDetailsWebTabViewItem : NSTabViewItem

@property (retain) iCloudAccountDetailsWebTabView *webView;
@property NSView *generalView;
@property struct CGSize { double width; double height; } contentSize;

- (void).cxx_destruct;

@end
