@interface IMURLProtocolHandler : AMSURLProtocolHandler

@property BOOL followsRedirects;

- (void)handleCompletionWithTask:(id)a0 metrics:(id)a1 decodedObject:(id)a2 completionHandler:(id /* block */)a3;

@end
