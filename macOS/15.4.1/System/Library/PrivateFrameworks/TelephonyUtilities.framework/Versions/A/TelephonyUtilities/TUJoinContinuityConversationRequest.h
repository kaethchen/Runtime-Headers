@class NSUUID;

@interface TUJoinContinuityConversationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL isAudioEnabled;
@property (readonly, nonatomic) BOOL isVideoEnabled;
@property (readonly, nonatomic) BOOL wantsStagingArea;

+ (id)requestForJoinWithUUID:(id)a0 isAudioEnabled:(BOOL)a1 isVideoEnabled:(BOOL)a2;
+ (id)requestForStagingAreaWithUUID:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 isAudioEnabled:(BOOL)a1 isVideoEnabled:(BOOL)a2 wantsStagingArea:(BOOL)a3;

@end
