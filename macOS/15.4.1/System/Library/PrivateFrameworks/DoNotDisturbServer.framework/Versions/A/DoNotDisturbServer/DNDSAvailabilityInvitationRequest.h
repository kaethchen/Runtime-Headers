@class NSArray, AKAvailabilityInvitation;

@interface DNDSAvailabilityInvitationRequest : NSObject

@property (readonly, copy) NSArray *handles;
@property (readonly, copy) AKAvailabilityInvitation *invitation;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHandles:(id)a0 invitation:(id)a1;

@end
