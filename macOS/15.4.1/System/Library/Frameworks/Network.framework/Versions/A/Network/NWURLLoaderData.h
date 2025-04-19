@class NSString, NSURL, NSObject;
@protocol OS_sec_trust, OS_dispatch_data, OS_nw_http_fields, OS_nw_connection;

@interface NWURLLoaderData : NSObject <NWURLLoader> {
    NSURL *_URL;
    NSObject<OS_dispatch_data> *_data;
    NSString *_MIMEType;
    NSString *_textEncodingName;
    unsigned long long _offset;
}

@property (readonly, nonatomic) NSString *multipartMixedReplaceBoundary;
@property (readonly, nonatomic) NSObject<OS_sec_trust> *peerTrust;
@property (readonly, nonatomic) BOOL requestComplete;
@property (readonly, nonatomic) NSObject<OS_nw_http_fields> *trailerFields;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)start:(id /* block */)a0;
- (BOOL)allowsWriteAfterBecomingStream;
- (BOOL)canHandleRedirectionToRequest:(id)a0;
- (void)notifyRequestCompletion:(id /* block */)a0;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)a0 maximumLength:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)readResponse:(id /* block */)a0;
- (id)takeCachedResponse;
- (void)updateClient:(id)a0;
- (void)writeData:(id)a0 complete:(BOOL)a1 completionHandler:(id /* block */)a2;

@end
