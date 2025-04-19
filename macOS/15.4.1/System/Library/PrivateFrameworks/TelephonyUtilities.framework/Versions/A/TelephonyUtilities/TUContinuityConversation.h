@class NSUUID, NSString, NSArray, NSData, NSNumber;

@interface TUContinuityConversation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) unsigned long long avMode;
@property (readonly, nonatomic) long long letMeInRequestState;
@property (readonly, nonatomic) NSNumber *state;
@property (readonly, nonatomic) long long remoteMemberCount;
@property (readonly, nonatomic) NSArray *remoteMemberContactIdentifiers;
@property (readonly, nonatomic) NSData *handlesHash;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUUID:(id)a0 displayName:(id)a1 state:(id)a2 avMode:(unsigned long long)a3 remoteMemberCount:(long long)a4 remoteMemberContactIdentifiers:(id)a5 letMeInRequestState:(long long)a6 handlesHash:(id)a7;

@end
