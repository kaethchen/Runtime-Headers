@class CNUIUserActionListModel, CNPromise, NSString, CNFuture, NSMenu, CNQuickActionView;
@protocol CNQuickActionViewClickHelperDelegate;

@interface CNQuickActionViewClickHelper : NSObject <NSMenuDelegate>

@property (retain, nonatomic) CNFuture *future;
@property (retain, nonatomic) CNPromise *disambiguationPromise;
@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) NSMenu *menu;
@property (weak, nonatomic) CNQuickActionView *quickActionView;
@property BOOL menuVisible;
@property (retain, nonatomic) CNUIUserActionListModel *model;
@property (readonly, weak, nonatomic) id<CNQuickActionViewClickHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)action;
- (void)menuDidClose:(id)a0;
- (void)menuWillOpen:(id)a0;
- (id)defaultAction;
- (void)didChooseActionMenuItem:(id)a0;
- (id)disambiguatedAction;
- (id)initWithQuickActionView:(id)a0 actionType:(id)a1 delegate:(id)a2;
- (void)presentDisambiguationUI;
- (void)presentMenu:(id)a0;
- (void)updateMenu:(id)a0 toMenu:(id)a1;

@end
