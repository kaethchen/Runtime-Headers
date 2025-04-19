@class NSString, FPItem;

@interface FPRenameOperation : FPActionOperation {
    FPItem *_item;
    NSString *_newName;
}

- (void).cxx_destruct;
- (id)initWithItem:(id)a0 newFileName:(id)a1;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)actionMain;
- (id)fp_prettyDescription;
- (id)initWithItem:(id)a0 newDisplayName:(id)a1;
- (id)initWithItem:(id)a0 newName:(id)a1;
- (id)initWithItem:(id)a0 newNameInternal:(id)a1;
- (void)presendNotifications;

@end
