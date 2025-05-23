@class NSArray;

@interface AVTAvatarFetchRequest : NSObject

@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, copy, nonatomic) NSArray *excludingIdentifiers;
@property (readonly, nonatomic) long long criteria;
@property (readonly, nonatomic) long long fetchLimit;

+ (id)requestForAvatarWithIdentifier:(id)a0;
+ (id)requestForAllAvatars;
+ (id)requestForAllAvatarsExcluding:(id)a0;
+ (id)requestForAvatarsWithIdentifiers:(id)a0;
+ (id)requestForCustomAvatars;
+ (id)requestForCustomAvatarsWithLimit:(long long)a0;
+ (id)requestForPredefinedAvatars;
+ (id)requestForStorePrimaryAvatar;
+ (id)requestForPredefinedAvatarsExcluding:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithCriteria:(long long)a0;
- (id)initWithCriteria:(long long)a0 identifier:(id)a1;
- (id)initWithCriteria:(long long)a0 identifiers:(id)a1 excludedIdentifiers:(id)a2 fetchLimit:(long long)a3;

@end
