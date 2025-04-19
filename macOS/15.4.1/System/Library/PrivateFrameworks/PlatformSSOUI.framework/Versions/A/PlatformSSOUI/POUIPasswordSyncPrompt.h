@class NSAlert, NSString;

@interface POUIPasswordSyncPrompt : NSWindowController <NSAlertDelegate>

@property (retain) NSAlert *alert;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *accountName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)alertShowHelp:(id)a0;
- (void)showWindow:(id)a0;
- (void)cancelClicked:(id)a0;
- (void)syncClicked:(id)a0;
- (void)didCompleteWithResult:(unsigned long long)a0;
- (id)createAlert;
- (void)closeDialog;
- (void)presentDialogWithCompletion:(id /* block */)a0;
- (void)enterPasswordClicked:(id)a0;

@end
