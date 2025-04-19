@class NSString;

@interface SGIdentityKey : NSObject <NSCopying> {
    NSString *_content;
}

@property (readonly, nonatomic) NSString *externalId;
@property (readonly, nonatomic) unsigned long long type;

+ (unsigned long long)identityTypeForKeyPart:(id)a0;
+ (BOOL)isSupportedEntityType:(long long)a0;
+ (id)keyForContactExternalId:(int)a0;
+ (id)keyForContactUniqueId:(id)a0;
+ (id)keyForEmail:(id)a0;
+ (id)keyForInstantMessageAddress:(id)a0;
+ (id)keyForNormalizedEmail:(id)a0;
+ (id)keyForNormalizedPhone:(id)a0;
+ (id)keyForPersonHandle:(id)a0;
+ (id)keyForSocialProfile:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (id)serialize;
- (id)emailAddress;
- (BOOL)hasPhone;
- (id)phone;
- (id)socialProfile;
- (BOOL)hasEmailAddress;
- (id)initWithType:(unsigned long long)a0 content:(id)a1;
- (BOOL)hasInstantMessageAddress;
- (BOOL)hasSocialProfile;
- (id)identityKey;
- (id)initWithSerialized:(id)a0;
- (id)instantMessageAddress;
- (BOOL)isEqualToIdentityKey:(id)a0;

@end
