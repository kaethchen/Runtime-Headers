@class NSDateFormatter;

@interface AKCommandLineUtilities : NSObject {
    NSDateFormatter *_dateFormatter;
}

@property (readonly, nonatomic) NSDateFormatter *dateFormatter;

- (void).cxx_destruct;
- (void)signXMLRequest:(id)a0;
- (id)_hostURL;
- (BOOL)_isURLString:(id)a0;
- (void)beginDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (void)createAndExecuteRequestForPath:(id)a0 requestBody:(id)a1 httpMethod:(id)a2 configuration:(id)a3 completion:(id /* block */)a4;
- (id)errorFromServerResponseBody:(id)a0;
- (id)jsonDictionaryForData:(id)a0 error:(id)a1;
- (id)mutableJSONRequestForPath:(id)a0;
- (id)mutableJSONRequestForURL:(id)a0;
- (void)signXMLRequest:(id)a0 withPostbackDictionary:(id)a1;
- (void)updateConfiguration:(id)a0 fromXMLAttributes:(id)a1 response:(id)a2;

@end
