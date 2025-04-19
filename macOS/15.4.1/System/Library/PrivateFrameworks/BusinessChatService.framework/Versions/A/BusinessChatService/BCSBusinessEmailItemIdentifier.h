@class NSString, NSArray, NSObject;

@interface BCSBusinessEmailItemIdentifier : NSObject <NSCopying, NSSecureCoding, BCSMultiKeyItemIdentifying, BCSPIRItemIdentifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *fullDomain;
@property (copy, nonatomic) NSString *topLevelDomain;
@property (nonatomic) long long truncatedHash;
@property (copy, nonatomic) NSArray *truncatedHashes;
@property (nonatomic) BOOL hasMatchingTruncatedHash;
@property (nonatomic) long long matchingTruncatedHash;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *pirKey;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEmail:(id)a0;
- (id)initWithEmail:(id)a0 fullDomain:(id)a1 topLevelDomain:(id)a2;
- (long long)_truncatedHashForString:(id)a0;
- (BOOL)matchesItemIdentifying:(id)a0;

@end
