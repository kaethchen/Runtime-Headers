@class NSString, NSArray;

@interface ABCNSocialProfile : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *urlString;
@property (readonly, copy, nonatomic) NSString *username;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *service;
@property (readonly, copy, nonatomic) NSString *displayname;
@property (readonly, copy, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3 displayname:(id)a4;
- (id)initWithUrlString:(id)a0 username:(id)a1 userIdentifier:(id)a2 service:(id)a3 displayname:(id)a4 bundleIdentifiers:(id)a5 teamIdentifier:(id)a6;

@end
