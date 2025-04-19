@class NSString;

@interface PKSharingInvitationRequestMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSString *passTypeIdentifier;
@property (readonly, nonatomic) NSString *passSerialNumber;
@property (readonly, nonatomic) NSString *personalizedVehicleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)configureWithContent:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1 personalizedVehicleIdentifier:(id)a2;

@end
