@class IAAppCheckboxMatrix, IAAccount, IAAListPlugin, NSMutableArray;

@interface IAAppCheckboxMatrixController : NSViewController <IAAppCheckboxMatrixRowItemDelegateProtocol> {
    IAAListPlugin *_plugin;
    IAAppCheckboxMatrix *_checkboxMatrix;
}

@property (retain) IAAccount *account;
@property (retain) NSMutableArray *apps;
@property (retain) NSMutableArray *pairedServices;
@property (retain) id delegate;

- (void).cxx_destruct;
- (id)view;
- (void)setServices:(id)a0;
- (void)_applyExceptions:(id)a0;
- (void)_sortApps;
- (void)checkboxClicked:(id)a0;
- (void)configureForProvider:(id)a0;
- (void)forceAppIDsEnabled:(id)a0;
- (id)initWithAccount:(id)a0 plugin:(id)a1;
- (void)selectAllApps;
- (void)selectAppIDs:(id)a0;
- (id)selectedApps;

@end
