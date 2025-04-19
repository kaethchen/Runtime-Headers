@class NSArray, EWSSearchExpressionType, MFEWSFindItemsResponseOperation;

@interface MFEWSFindItemsRequestOperation : MFEWSRequestOperation

@property (readonly, copy, nonatomic) NSArray *additionalProperties;
@property (readonly, nonatomic) EWSSearchExpressionType *searchExpression;
@property (readonly, copy, nonatomic) NSArray *EWSFolderIdStrings;
@property (retain, nonatomic) MFEWSFindItemsResponseOperation *responseOperation;

- (void).cxx_destruct;
- (id)activityString;
- (id)initWithGateway:(id)a0 errorHandler:(id)a1;
- (id)initWithSearchExpression:(id)a0 EWSFolderIdStrings:(id)a1 additionalProperties:(id)a2 gateway:(id)a3;
- (id)newResponseOperationWithGateway:(id)a0 errorHandler:(id)a1;
- (id)prepareRequest;

@end
