@class GKMatch, NSArray;

@interface GKPlayerPickerContext : GKInternalRepresentation

@property (retain, nonatomic) GKMatch *match;
@property (nonatomic) long long maxPlayers;
@property (retain, nonatomic) NSArray *excludedPlayers;
@property (nonatomic) long long pickerOrigin;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;

@end
