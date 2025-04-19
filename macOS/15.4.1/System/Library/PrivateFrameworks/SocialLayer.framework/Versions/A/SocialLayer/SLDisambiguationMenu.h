@interface SLDisambiguationMenu : NSObject

@property (copy, nonatomic) id /* block */ callbackAction;

- (void).cxx_destruct;
- (void)menuItemClicked:(id)a0;
- (id)gelatoMenuForAttributionIDs:(id)a0 symbol:(id)a1;
- (void)gelatoMenuItemClicked:(id)a0;
- (id)menuForAttributionIDs:(id)a0 pillWidth:(double)a1;
- (void)openMessagesForMessageGUID:(id)a0;

@end
