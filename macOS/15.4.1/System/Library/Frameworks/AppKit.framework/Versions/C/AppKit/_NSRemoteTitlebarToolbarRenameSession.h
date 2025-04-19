@class NSURL, NSFileActionsPopoverController, NSString;
@protocol NSRemoteTitlebarToolbarRenameSessionDelegate;

@interface _NSRemoteTitlebarToolbarRenameSession : NSObject <NSFileActionsPopoverDelegate> {
    struct { unsigned char didRename : 1; } _flags;
}

@property (retain) NSURL *fileURL;
@property (weak) id<NSRemoteTitlebarToolbarRenameSessionDelegate> delegate;
@property (copy) id /* block */ completionHandler;
@property (retain) NSFileActionsPopoverController *controller;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 delegate:(id)a1 completionHandler:(id /* block */)a2;
- (void)popover:(id)a0 didMoveFileToURL:(id)a1;
- (void)popoverHasClosed:(id)a0;
- (void)runSessionWithTextField:(id)a0;

@end
