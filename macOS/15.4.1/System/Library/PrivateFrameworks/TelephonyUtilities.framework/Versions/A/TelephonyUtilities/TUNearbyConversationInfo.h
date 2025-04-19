@class NSUUID, NSString, TUNearbyDeviceHandle;

@interface TUNearbyConversationInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *conversationUUID;
@property (readonly, copy, nonatomic) NSString *userProfileIdentifier;
@property (readonly, copy, nonatomic) TUNearbyDeviceHandle *deviceHandle;
@property (readonly, nonatomic) unsigned long long avMode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithConversationUUID:(id)a0 userProfileIdentifier:(id)a1 deviceHandle:(id)a2 avMode:(unsigned long long)a3;
- (BOOL)isEqualToConversationInfo:(id)a0;

@end
