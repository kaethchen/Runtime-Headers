@class NSMutableArray;
@protocol NSTabViewControllerWindowTabsDelegate, NSTabViewControllerUIProvider;

@interface _NSTabViewControllerPrivateData : NSObject {
    id<NSTabViewControllerWindowTabsDelegate> _windowTabsDelegate;
    struct { unsigned char settingTabViewItems : 1; unsigned char canPropagateSelectedChildViewControllerTitle : 1; unsigned char ibWillSetTabViewItems : 1; unsigned char preventInsertAndRemoveChildViewControllersFromSendingKVO : 1; unsigned int _reserved : 28; } _flags;
}

@property long long selectedTabViewItemIndex;
@property unsigned long long transitionOptions;
@property long long tabStyle;
@property (retain) id<NSTabViewControllerUIProvider> UIProvider;
@property (retain) NSMutableArray *tabViewItems;

- (void)dealloc;

@end
