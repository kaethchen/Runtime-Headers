@class MMWebKitViewController, NSWindow, NSString;

@interface MMUpsellWebKitViewController : NSObject <MMWebKitViewControllerDelegate>

@property (retain, nonatomic) MMWebKitViewController *webKitViewController;
@property (retain, nonatomic) NSWindow *parentWindow;
@property (copy, nonatomic) id /* block */ upsellCompletionHandler;
@property (nonatomic) BOOL didEncounterLoadError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)closeUpsellWindow;
- (void)mmWebKitViewControllerDidCancel:(id)a0;
- (void)mmWebKitViewControllerDidDismiss:(id)a0;
- (void)mmWebKitViewControllerDidFailLoading:(id)a0 error:(id)a1;
- (void)mmWebKitViewControllerDidFinishLoading:(id)a0;
- (void)mmWebKitViewControllerDidSucceed:(id)a0;
- (void)runUpsellWebKitViewControllerForWindow:(id)a0 accountID:(id)a1 librarySize:(long long)a2 completionHandler:(id /* block */)a3;
- (void)runUpsellWebKitViewControllerForWindow:(id)a0 accountID:(id)a1 librarySizeAsNumber:(id)a2 completionHandler:(id /* block */)a3;

@end
