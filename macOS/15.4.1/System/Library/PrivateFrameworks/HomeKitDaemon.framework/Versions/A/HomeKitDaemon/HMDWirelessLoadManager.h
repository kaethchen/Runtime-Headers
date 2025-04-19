@class NSDate;

@interface HMDWirelessLoadManager : NSObject

@property (readonly, nonatomic) int btLoad;
@property (readonly, nonatomic) int btAudioTask;
@property (readonly, nonatomic) int btNonAudioTask;
@property (readonly, nonatomic) NSDate *lastLoadTimestamp;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)getBtLoadData;

@end
