@class NSString, MRPlayerPath, NSDictionary;

@interface _MPNowPlayingInfoTransportableSessionRequest : NSObject <MPNowPlayingInfoTransportableSessionRequest>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *preferredSessionType;
@property (readonly, nonatomic) MRPlayerPath *destinationPlayerPath;
@property (readonly, nonatomic) NSDictionary *destinationCommandInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithMediaRemoteRequest:(id)a0;

- (void).cxx_destruct;

@end
