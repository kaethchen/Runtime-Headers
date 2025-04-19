@class CNUIUserActionItem, NSString, CNUIUserActionListModel;
@protocol CNLSApplicationWorkspace;

@interface CNContactActionsDisambiguationMenuGenerator : NSObject

@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) CNUIUserActionListModel *model;
@property (readonly, nonatomic) CNUIUserActionItem *defaultAction;
@property (readonly, nonatomic) NSString *actionType;
@property (readonly, nonatomic) id<CNLSApplicationWorkspace> applicationWorkspace;
@property (readonly, copy, nonatomic) id /* block */ menuItemForActionItem;

+ (id)labelAttributes;
+ (id)unlocalizedLabelFromActionItem:(id)a0;
+ (id)TTYPostfixFormatStringForActionItem:(id)a0;
+ (id)TTYPostfixedLabelFromLabel:(id)a0 forActionItem:(id)a1;
+ (id)actionTitleAttributes;
+ (id)adjustTabOfAttributedString:(id)a0 withTabOffset:(double)a1;
+ (id)capitalizedDisplayLabelFromLabel:(id)a0;
+ (id)labelForActionItem:(id)a0 usingApplicationWorkspace:(id)a1 capitalize:(BOOL)a2;
+ (double)maxWidthOfMenuItemList:(id)a0;
+ (id)menuItemLabelWithActionLabel:(id)a0 secondaryLabel:(id)a1;
+ (id)paragraphStyleWithTabOffset:(double)a0;
+ (id)secondaryLabelAttributes;
+ (id)titleMenuItemWithLabel:(id)a0;
+ (id)trademarkLabelByLowercaseTrademarkLabel;
+ (double)widthOfSpace;

- (void).cxx_destruct;
- (void)adjustTabStopForMaximumWidth:(id)a0;
- (id)initWithTarget:(id)a0 model:(id)a1 actionType:(id)a2 applicationWorkspace:(id)a3;
- (id)makeMenu;
- (void)markTheDefaultItem:(id)a0;
- (id)menuItemForActionItem:(id)a0;
- (id)menuItemsForActions;
- (id)menuItemsForDirectoryServiceActions;
- (id)menuItemsForFoundOnDeviceActions;
- (id)titleMenuItem;

@end
