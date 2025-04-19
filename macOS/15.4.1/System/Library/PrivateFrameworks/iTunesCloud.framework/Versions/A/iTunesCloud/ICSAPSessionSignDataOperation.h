@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)executeWithSAPContext:(id)a0;
- (void)finishWithSAPContextPreparationError:(id)a0;

@end
