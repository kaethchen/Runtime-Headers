@class NSString;
@protocol IRXPCSessionClient;

@interface IRXPCSessionClient : NSObject <IRXPCSessionClient>

@property (weak, nonatomic) id<IRXPCSessionClient> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_didSpotOnLocationComplete:(id)a0;
- (void)_didUpdateBundlesWithSignificantInteractionPattern:(id)a0;
- (void)_didUpdateContext:(id)a0;
- (void)_sessionDidFailWithError:(id)a0;

@end
