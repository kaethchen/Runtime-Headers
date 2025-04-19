@class NSMenu, NSString, NSMenuItem;

@interface NSTrackingInfoImpl : NSObject <NSMenuTrackingInfo>

@property (readonly) NSMenu *menu;
@property (readonly) NSMenuItem *selectedItem;
@property (readonly) NSMenuItem *targetedItem;
@property (readonly) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetedItemFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;

@end
