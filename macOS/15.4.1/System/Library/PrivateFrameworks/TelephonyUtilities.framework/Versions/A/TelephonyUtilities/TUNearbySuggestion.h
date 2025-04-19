@class NSUUID, TUConversationActivity, TUNearbyDeviceHandle;

@interface TUNearbySuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) TUNearbyDeviceHandle *deviceHandle;
@property (readonly, nonatomic) TUConversationActivity *activity;
@property (readonly, nonatomic) long long type;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToSuggestion:(id)a0;
- (id)initWithIdentifier:(id)a0 deviceHandle:(id)a1 activity:(id)a2 type:(long long)a3;
- (BOOL)isEquivalentToSuggestion:(id)a0;

@end
