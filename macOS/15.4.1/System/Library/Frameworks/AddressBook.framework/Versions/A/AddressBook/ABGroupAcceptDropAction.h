@class ABCDContainer, NSString;
@protocol ABGroupDropHelper;

@interface ABGroupAcceptDropAction : NSObject <ABUserInterfaceAction>

@property (readonly, nonatomic) ABCDContainer *container;
@property (readonly, nonatomic) id<ABGroupDropHelper> helper;
@property (readonly, nonatomic) BOOL requiresAuthorizationBeforeExecution;
@property (nonatomic) BOOL executionWasAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
