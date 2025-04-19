@class NSString, GKPlayerInternal;

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
    NSString *_guestIdentifier;
}

@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal;

+ (BOOL)supportsSecureCoding;
+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)playerID;
- (id)guestIdentifier;
- (id)initWithHostPlayerInternal:(id)a0 guestIdentifier:(id)a1;
- (BOOL)isGuestPlayer;
- (void)setGuestIdentifier:(id)a0;

@end
