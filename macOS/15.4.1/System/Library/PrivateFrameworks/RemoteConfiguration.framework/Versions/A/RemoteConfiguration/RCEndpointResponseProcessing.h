@interface RCEndpointResponseProcessing : NSObject

+ (id)_configurationErrorForErrorDicts:(id)a0;
+ (void)parseEndpointResponse:(id)a0 configurationSettings:(id)a1 maxAge:(id)a2 loggingPrefix:(id)a3 completion:(id /* block */)a4;
+ (void)parseEndpointResponseDict:(id)a0 parsingError:(id)a1 configurationSettings:(id)a2 maxAge:(id)a3 loggingPrefix:(id)a4 completion:(id /* block */)a5;

@end
