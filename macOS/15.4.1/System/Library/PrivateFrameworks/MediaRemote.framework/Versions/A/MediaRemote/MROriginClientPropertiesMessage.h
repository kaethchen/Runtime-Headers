@class NSString, NSDate;

@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) NSString *devicePlaybackSessionID;

- (unsigned long long)type;
- (id)initWithLastPlayingDate:(id)a0 devicePlaybackSessionID:(id)a1;

@end
