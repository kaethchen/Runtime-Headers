@class NSArray, NSUUID;

@interface AVCoordinatedPlaybackParticipant : NSObject

@property (readonly, nonatomic) NSArray *suspensionReasons;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic) NSUUID *identifier;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithParticipantIdentifier:(id)a0 readyToPlay:(BOOL)a1 suspensionReasons:(id)a2;

@end
