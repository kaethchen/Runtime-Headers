@class CKShareParticipant, NSString, NSColor;

@interface _NSCloudSharingParticipantDetails : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) CKShareParticipant *participant;
@property (readonly, copy) NSString *detailText;
@property (copy) NSColor *participantColor;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParticipant:(id)a0 detailText:(id)a1;

@end
