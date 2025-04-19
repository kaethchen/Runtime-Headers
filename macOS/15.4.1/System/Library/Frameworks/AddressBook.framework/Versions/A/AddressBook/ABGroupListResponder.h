@class ABGroupListController;
@protocol ABUserInterfaceAction;

@interface ABGroupListResponder : NSResponder {
    ABGroupListController *_groupListController;
    id<ABUserInterfaceAction> _createGroupAction;
}

- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)a0;
- (void)editSmartGroup:(id)a0;
- (void)createGroup:(id)a0;
- (id)initWithGroupListController:(id)a0 groupListActions:(id)a1;
- (void)renameGroup:(id)a0;
- (void)sendEmailToGroup:(id)a0;

@end
