@class MRPlayerPath, NSArray;

@interface MRPlayerClientParticipantsUpdateMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) NSArray *participants;

- (unsigned long long)type;
- (id)initWithPlayerPath:(id)a0 participants:(id)a1;

@end
