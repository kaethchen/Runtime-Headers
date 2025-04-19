@class NSString, NSURL, STBlockingViewController;

@interface DigitalHealthOverlayDialogConfiguration : NSObject <TabDialogConfiguration>

@property (readonly, copy, nonatomic) NSString *host;
@property (retain, nonatomic) NSURL *url;
@property (readonly, nonatomic) STBlockingViewController *blockingViewController;
@property (readonly, nonatomic) long long dialogType;
@property (readonly, nonatomic) BOOL shouldHideTabContent;
@property (readonly, nonatomic) id /* block */ presentationBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
