@class NSString;

@interface GKTransportParticipant : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSString *pseudonym;

+ (id)participantsFrom:(id)a0 withKey:(id)a1;
+ (id)secureCodedPropertyKeys;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPlayerID:(id)a0 pseudonym:(id)a1;
- (id)serverRepresentation;

@end
