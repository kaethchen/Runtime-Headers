@class NSMutableDictionary, HTTPConnection, NSObject, HTTPResponseProxy;
@protocol HTTPResponse;

@interface RouteResponse : NSObject {
    HTTPResponseProxy *proxy;
}

@property (readonly, weak, nonatomic) HTTPConnection *connection;
@property (readonly, nonatomic) NSMutableDictionary *headers;
@property (retain, nonatomic) NSObject<HTTPResponse> *response;
@property (readonly, nonatomic) NSObject<HTTPResponse> *proxiedResponse;
@property (nonatomic) long long statusCode;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)respondWithData:(id)a0;
- (id)webDriver_decodedResponseString;
- (void)respondWithFile:(id)a0;
- (void)respondWithFile:(id)a0 async:(BOOL)a1;
- (void)respondWithString:(id)a0;
- (void)respondWithString:(id)a0 encoding:(unsigned long long)a1;
- (void)setHeader:(id)a0 value:(id)a1;
- (void)webDriver_expectAsynchronousData;
- (void)webDriver_respondWithData:(id)a0 relatedSession:(id)a1;
- (void)webDriver_respondWithError:(id)a0 relatedSession:(id)a1;
- (void)webDriver_respondWithPayload:(id)a0 statusCode:(long long)a1 relatedSession:(id)a2;
- (unsigned long long)webDriver_textEncodingForBody;

@end
