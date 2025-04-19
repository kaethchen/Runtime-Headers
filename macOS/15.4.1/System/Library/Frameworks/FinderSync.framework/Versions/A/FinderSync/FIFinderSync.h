@class NSString, NSImage;

@interface FIFinderSync : NSObject <FIFinderSync, NSExtensionRequestHandling>

@property (readonly, copy) NSString *toolbarItemName;
@property (readonly, copy) NSImage *toolbarItemImage;
@property (readonly, copy) NSString *toolbarItemToolTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)beginRequestWithExtensionContext:(id)a0;

@end
