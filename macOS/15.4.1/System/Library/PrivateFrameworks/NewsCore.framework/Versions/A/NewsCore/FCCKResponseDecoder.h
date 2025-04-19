@interface FCCKResponseDecoder : NSObject

+ (void)processResponseWithPayload:(id)a0 operationHandler:(id /* block */)a1 recordHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;

- (id)init;

@end
