@class NSDictionary, NSString;

@interface SHDefaultConfigurationValues : NSObject

@property (readonly) NSDictionary *defaultValues;
@property (readonly) double recordingIntermission;
@property (readonly) double liveAudioMinimumRecordingDuration;
@property (readonly, copy) NSString *campaignGroup;
@property (readonly) long long lookupBatchSize;
@property (readonly, copy) NSString *providerToken;

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;

@end
