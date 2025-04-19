@interface HTTPMessage : NSObject

@property (readonly) struct __CFHTTPMessage { } *message;

- (void)dealloc;
- (id)version;
- (id)url;
- (BOOL)appendData:(id)a0;
- (id)method;
- (long long)statusCode;
- (id)allHeaderFields;
- (void)setBody:(id)a0;
- (id)body;
- (id)initEmptyRequest;
- (id)messageData;
- (BOOL)isHeaderComplete;
- (id)headerField:(id)a0;
- (id)initRequestWithMethod:(id)a0 URL:(id)a1 version:(id)a2;
- (id)initResponseWithStatusCode:(long long)a0 description:(id)a1 version:(id)a2;
- (void)setHeaderField:(id)a0 value:(id)a1;

@end
