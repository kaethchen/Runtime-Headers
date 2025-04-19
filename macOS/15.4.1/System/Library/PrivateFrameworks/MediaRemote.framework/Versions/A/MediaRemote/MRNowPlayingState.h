@class NSData, NSArray, NSDictionary, MRPlaybackQueue, NSString, MRPlayerPath, MRPlaybackQueueRequest;

@interface MRNowPlayingState : NSObject <NSCopying>

@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (copy, nonatomic) NSString *displayID;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) MRPlayerPath *playerPath;
@property (copy, nonatomic) MRPlaybackQueueRequest *request;
@property (nonatomic) BOOL hasPlaybackState;
@property (nonatomic) unsigned int playbackState;
@property (nonatomic) BOOL hasPlaybackStateTimestamp;
@property (nonatomic) double playbackStateTimestamp;
@property (readonly, nonatomic) BOOL containsArtwork;
@property (nonatomic) unsigned long long playbackQueueCapabilities;
@property (readonly, nonatomic) NSData *data;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)dictionaryRepresentation;
- (id)copyWithoutArtwork;
- (id)initWithPlayerPath:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (id)protobufWithEncoding:(long long)a0;

@end
