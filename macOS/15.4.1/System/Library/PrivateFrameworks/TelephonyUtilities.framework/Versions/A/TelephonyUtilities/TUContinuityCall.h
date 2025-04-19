@class NSUUID, NSString, NSArray, NSNumber, TUContinuityCallInfo;

@interface TUContinuityCall : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSUUID *conversationUUID;
@property (readonly, nonatomic) NSNumber *isMuted;
@property (readonly, nonatomic) NSNumber *isCameraEnabled;
@property (readonly, nonatomic) NSUUID *callGroupUUID;
@property (readonly, nonatomic) TUContinuityCallInfo *callInfo;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *callerIdSubstring;
@property (readonly, nonatomic) BOOL isBranded;
@property (readonly, nonatomic) NSArray *remoteMemberContactIdentifiers;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 conversationUUID:(id)a1 callGroupUUID:(id)a2 status:(int)a3 isMuted:(id)a4 isCameraEnabled:(id)a5 callInfo:(id)a6;

@end
