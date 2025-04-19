@class NSString, ABGroupListController;
@protocol ABGroupHelperFactory;

@interface ABAbstractGroupListAction : NSObject <ABUserInterfaceAction> {
    ABGroupListController *_groupListController;
    id<ABGroupHelperFactory> _helperFactory;
}

@property (readonly, nonatomic) BOOL requiresAuthorizationBeforeExecution;
@property (nonatomic) BOOL executionWasAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
