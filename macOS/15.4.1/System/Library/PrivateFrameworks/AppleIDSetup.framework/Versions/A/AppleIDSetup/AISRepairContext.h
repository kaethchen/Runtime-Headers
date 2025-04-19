@class NSString;

@interface AISRepairContext : AISSetupContext

@property (readonly, copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *userProfileIdentifier;

- (void).cxx_destruct;
- (id)initWithAltDSID:(id)a0;
- (id)initWithUserProfileIdentifier:(id)a0;

@end
