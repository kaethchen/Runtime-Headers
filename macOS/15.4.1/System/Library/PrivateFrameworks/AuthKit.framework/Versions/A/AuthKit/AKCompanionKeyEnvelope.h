@class NSString;

@interface AKCompanionKeyEnvelope : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *machineID;
@property (readonly, copy, nonatomic) NSString *continuationKey;
@property (readonly, copy, nonatomic) NSString *passwordResetKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAltDSID:(id)a0 machineID:(id)a1 continuationKey:(id)a2 passwordResetKey:(id)a3;
- (id)initWithUsername:(id)a0 altDSID:(id)a1 machineID:(id)a2 continuationKey:(id)a3 passwordResetKey:(id)a4;

@end
