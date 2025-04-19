@protocol ABUserInterfaceAction;

@interface ABGroupListActions : NSObject

@property (readonly) id<ABUserInterfaceAction> createGroupAction;
@property (readonly) id<ABUserInterfaceAction> createSmartGroupAction;

- (void).cxx_destruct;
- (id)initWithGroupListController:(id)a0 helperFactory:(id)a1;

@end
