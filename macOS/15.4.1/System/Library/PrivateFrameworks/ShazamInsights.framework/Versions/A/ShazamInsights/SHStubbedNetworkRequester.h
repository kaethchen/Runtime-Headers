@class NSHTTPURLResponse, NSString, NSData, NSURL;

@interface SHStubbedNetworkRequester : NSObject <SHNetworkRequester>

@property (readonly) NSData *requestData;
@property (readonly) NSURL *downloadFileURL;
@property (readonly) NSHTTPURLResponse *httpResponse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
