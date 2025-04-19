@class NSDictionary;

@interface HMWidgetManagerFetchStateForActionSetsResponse : NSObject

@property (readonly, copy) NSDictionary *isOnByActionSetUniqueIdentifier;
@property (readonly, copy) NSDictionary *didExecutionFailByActionSetUniqueIdentifier;

- (void).cxx_destruct;
- (id)initWithIsOnByActionSetsUniqueIdentifier:(id)a0 didExecutionFailByActionSetUniqueIdentifier:(id)a1;

@end
