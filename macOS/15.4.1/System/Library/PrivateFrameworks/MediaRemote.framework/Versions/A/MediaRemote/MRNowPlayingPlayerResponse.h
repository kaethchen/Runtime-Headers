@class MRPlayerPath, NSArray, MRPlaybackQueue, MRClient, NSDate, NSDictionary, MRDestination;

@interface MRNowPlayingPlayerResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) MRDestination *destination;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) MRPlaybackQueue *playbackQueue;
@property (nonatomic) unsigned int playbackState;
@property (retain, nonatomic) MRClient *clientProperties;
@property (copy, nonatomic) NSDate *deviceLastPlayingDate;
@property (copy, nonatomic) NSDate *playerLastPlayingDate;
@property (readonly, nonatomic) NSDictionary *shortDictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *debugDictionaryRepresentation;
@property (readonly, copy, nonatomic) MRPlayerPath *playerPath;
@property (readonly, copy, nonatomic) NSArray *proxiableSupportedCommands;
@property (readonly, nonatomic) int shuffleMode;
@property (readonly, nonatomic) int repeatMode;
@property (readonly, nonatomic) float playbackRate;
@property (readonly, nonatomic) BOOL deviceHasPlayedRecently;
@property (readonly, nonatomic) BOOL playerHasPlayedRecently;
@property (readonly, nonatomic) NSDate *lastPlayingDate;
@property (readonly, nonatomic) BOOL hasPlayedRecently;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setPlayerPath:(id)a0;

@end
