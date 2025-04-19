@class NSArray, NSMutableArray, EWSGetItemResponseType;

@interface MFEWSGetItemsResponseOperation : MFEWSResponseOperation

@property (retain) NSArray *EWSItemIdsRequested;
@property (retain) NSMutableArray *EWSItems;
@property (retain) EWSGetItemResponseType *response;

- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
