@interface MPCAssistantEncodings : NSObject

- (void)decodeHashedRouteUIDs:(id)a0 completion:(id /* block */)a1;
- (id)decodeURLData:(id)a0;
- (void)encodeHashedRouteUIDs:(id)a0 completion:(id /* block */)a1;
- (id)encodeURLData:(id)a0;

@end
