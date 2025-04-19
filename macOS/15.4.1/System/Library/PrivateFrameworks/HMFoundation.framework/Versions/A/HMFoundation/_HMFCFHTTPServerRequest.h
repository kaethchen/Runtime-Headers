@class NSMutableData, _HMFCFHTTPServerConnection;

@interface _HMFCFHTTPServerRequest : HMFHTTPRequestInternal

@property (readonly, nonatomic) NSMutableData *bodyData;
@property (readonly, nonatomic) struct _CFHTTPServerRequest { } *requestRef;
@property (readonly, nonatomic) struct __CFReadStream { } *bodyStream;
@property (readonly, weak, nonatomic) _HMFCFHTTPServerConnection *connection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)URL;
- (void)setURL:(id)a0;
- (id)method;
- (void)setMethod:(id)a0;
- (void)setBody:(id)a0;
- (id)body;
- (id)headerFields;
- (void)setHeaders:(id)a0;
- (void)appendBodyData:(id)a0;
- (id)attributeDescriptions;
- (id)initWithConnection:(id)a0 requestRef:(struct _CFHTTPServerRequest { } *)a1;
- (id)responseWithStatusCode:(long long)a0;

@end
