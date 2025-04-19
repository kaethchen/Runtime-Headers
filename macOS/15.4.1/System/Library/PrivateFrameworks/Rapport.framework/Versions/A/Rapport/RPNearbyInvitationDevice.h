@interface RPNearbyInvitationDevice : RPEndpoint <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL inBubble;
@property (nonatomic) BOOL wasTriggered;
@property (readonly, nonatomic) unsigned char deviceColor;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)descriptionWithLevel:(int)a0;
- (BOOL)isEqualToDevice:(id)a0;
- (unsigned int)updateWithEndpoint:(id)a0;
- (unsigned int)updateWithSFDevice:(id)a0;

@end
