@class NSString, NSObject;

@interface BCSBusinessLogoItemIdentifier : NSObject <NSCopying, NSSecureCoding, BCSItemIdentifying, BCSPIRItemIdentifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *businessId;
@property (nonatomic) long long truncatedHash;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pirKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBusinessId:(id)a0;
- (long long)_truncatedHashForString:(id)a0;
- (BOOL)matchesItemIdentifying:(id)a0;

@end
