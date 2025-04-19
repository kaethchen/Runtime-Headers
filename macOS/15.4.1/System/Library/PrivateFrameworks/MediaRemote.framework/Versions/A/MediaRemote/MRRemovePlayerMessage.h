@class MRPlayerPath;

@interface MRRemovePlayerMessage : MRProtocolMessage

@property (readonly, nonatomic) MRPlayerPath *playerPath;

- (unsigned long long)type;
- (id)initWithPlayerPath:(id)a0;

@end
