@class NSString, NSSharingAccountConfigurationViewController, NSViewController;

@interface NSSharingContainerViewController : NSViewController <NSExtensionRequestHandling>

@property (retain) NSSharingAccountConfigurationViewController *configurationViewController;
@property (retain) NSViewController *shareViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
