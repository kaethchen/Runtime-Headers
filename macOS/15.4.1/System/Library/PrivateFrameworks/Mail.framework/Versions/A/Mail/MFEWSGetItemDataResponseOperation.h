@class NSArray, EWSGetItemResponseType;

@interface MFEWSGetItemDataResponseOperation : MFEWSResponseOperation

@property (retain, nonatomic) NSArray *itemIdTypes;
@property (copy, nonatomic) id /* block */ dataHandler;
@property (retain) EWSGetItemResponseType *response;

- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
