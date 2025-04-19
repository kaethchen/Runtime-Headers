@class NSArray, NSString, NSDictionary;

@interface MPCMediaRemoteControllerPlaybackQueue : NSObject

@property (readonly, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic) NSString *playingIdentifier;
@property (readonly, nonatomic) NSString *queueIdentifier;
@property (readonly, nonatomic) NSDictionary *queueProperties;

- (void).cxx_destruct;
- (id)initWithIdentifiers:(id)a0 playingIdentifier:(id)a1 queueIdentifier:(id)a2 queueProperties:(id)a3;

@end
