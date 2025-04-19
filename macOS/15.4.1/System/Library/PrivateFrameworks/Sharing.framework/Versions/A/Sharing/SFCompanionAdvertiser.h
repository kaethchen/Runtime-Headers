@class NSString, NSData;
@protocol SFCompanionAdvertiserDelegate;

@interface SFCompanionAdvertiser : NSObject

@property id<SFCompanionAdvertiserDelegate> delegate;
@property BOOL supportsStreams;
@property (readonly, copy) NSString *serviceType;
@property (readonly) NSData *serviceEndpointData;

- (void)dealloc;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (id)initWithServiceType:(id)a0;
- (void)getContinuationStreamsWithEndpointData:(id)a0 completionHandler:(id /* block */)a1;

@end
