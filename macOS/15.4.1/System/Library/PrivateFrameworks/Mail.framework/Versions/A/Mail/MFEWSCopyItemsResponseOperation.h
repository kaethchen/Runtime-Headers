@class NSArray, EWSCopyItemResponseType;

@interface MFEWSCopyItemsResponseOperation : MFEWSResponseOperation

@property (nonatomic) unsigned long long expectedResponseCount;
@property (copy) NSArray *destinationEWSItemIdStrings;
@property (retain) EWSCopyItemResponseType *response;

- (void).cxx_destruct;
- (void)executeOperation;
- (void)prepareToExecuteWithResponse:(id)a0 forRequestOperation:(id)a1;

@end
