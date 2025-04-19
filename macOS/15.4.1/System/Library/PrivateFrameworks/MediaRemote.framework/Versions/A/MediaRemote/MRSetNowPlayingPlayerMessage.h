@class MRPlayerPath;

@interface MRSetNowPlayingPlayerMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (id)initWithPlayerPath:(id)a0;

@end
