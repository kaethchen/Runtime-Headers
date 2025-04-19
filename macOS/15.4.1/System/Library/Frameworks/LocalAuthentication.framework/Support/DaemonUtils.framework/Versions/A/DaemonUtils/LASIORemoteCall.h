@class NSUUID, NSDictionary, NSNumber, NSObject;
@protocol OS_dispatch_semaphore;

@interface LASIORemoteCall : NSObject

@property (retain) NSUUID *callID;
@property (retain) NSObject<OS_dispatch_semaphore> *semaphore;
@property unsigned int command;
@property (retain) NSNumber *version;
@property (retain) id requestData;
@property (retain) id responseData;
@property (retain) NSNumber *responseError;
@property (readonly) NSDictionary *payload;

+ (id)call;

- (id)init;
- (void).cxx_destruct;
- (id)requestPayload;

@end
