@class NSError;

@interface SFCollaborationAddParticipantsAllowedResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL addParticipantsAllowed;
@property (readonly, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAddParticipantsAllowed:(BOOL)a0 error:(id)a1;

@end
