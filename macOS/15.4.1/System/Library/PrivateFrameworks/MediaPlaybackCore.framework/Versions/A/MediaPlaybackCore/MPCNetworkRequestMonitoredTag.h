@class NSString, NSDictionary;
@protocol MPCPlaybackEngineInfoProvider;

@interface MPCNetworkRequestMonitoredTag : NSObject

@property (weak, nonatomic) id<MPCPlaybackEngineInfoProvider> engineInfoProvider;
@property (copy, nonatomic) NSString *playbackEngineID;
@property (copy, nonatomic) NSDictionary *contextInfo;

- (void).cxx_destruct;
- (id)initWithContextInfo:(id)a0 engineInfoProvider:(id)a1;

@end
