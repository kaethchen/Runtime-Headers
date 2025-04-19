@class LNValue, LNActionOutput;

@interface LNFetchActionOutputValueOperation : LNInterfaceConnectionOperation

@property (retain, nonatomic) LNActionOutput *actionOutput;
@property (retain, nonatomic) LNValue *value;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (void)start;
- (void)finishWithError:(id)a0;
- (id)initWithConnectionInterface:(id)a0 actionOutput:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;

@end
