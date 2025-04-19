@class NSString, NSArray;

@interface AVAudioHardwareBox : AVAudioHardwareObject

@property (readonly, nonatomic) NSString *UID;
@property (readonly, nonatomic) unsigned int transportType;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly, nonatomic) BOOL hasVideo;
@property (readonly, nonatomic) BOOL hasMIDI;
@property (readonly, nonatomic) BOOL requiresAuthentication;
@property (readonly, nonatomic, getter=isAcquired) BOOL acquired;
@property (readonly, nonatomic) unsigned long long acquistionStatus;
@property (readonly, nonatomic) NSArray *devices;
@property (readonly, nonatomic) NSArray *clocks;
@property (readonly, nonatomic) NSArray *controls;

@end
