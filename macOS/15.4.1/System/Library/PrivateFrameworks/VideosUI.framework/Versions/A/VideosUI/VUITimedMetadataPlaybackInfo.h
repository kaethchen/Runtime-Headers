@class NSString, NSData, NSDate;

@interface VUITimedMetadataPlaybackInfo : NSObject

@property (retain, nonatomic) NSString *programId;
@property (nonatomic) double currentTime;
@property (retain, nonatomic) NSDate *timeStamp;
@property (nonatomic) double playbackRate;
@property (nonatomic) double featureStartTime;
@property (retain, nonatomic) NSString *audioLanguage;
@property (retain, nonatomic) NSString *adamId;
@property (retain, nonatomic) NSData *rawTimedMetadata;

- (id)description;
- (void).cxx_destruct;

@end
