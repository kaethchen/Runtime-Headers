@interface TLAlertPlaybackBeginEvent : NSObject

@property (readonly, nonatomic) long long audioSessionReporterID;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)_initWithAudioSessionReporterID:(long long)a0;

@end
