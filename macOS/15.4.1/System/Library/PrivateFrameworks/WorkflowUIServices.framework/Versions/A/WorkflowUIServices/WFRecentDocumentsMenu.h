@class NSArray, NSUserDefaults;

@interface WFRecentDocumentsMenu : NSMenu

@property (retain, nonatomic) NSUserDefaults *defaults;
@property (copy, nonatomic) NSArray *workflows;

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0;
- (void)clearRecents:(id)a0;
- (void)reloadMenuItems;
- (void)updateWorkflows;
- (void)openShortcut:(id)a0;

@end
