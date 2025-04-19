@class NSString, NSViewController;

@interface _NSTabViewItemAuxiliary : NSObject {
    struct CGSize { double width; double height; } cachedMinimumLabelSize;
    long long _springLoadingHighlight;
}

@property (copy) NSString *explicitToolTip;
@property (retain) NSViewController *viewController;

- (void)dealloc;

@end
