@class NSString, NSError;

@interface ICMusicKitTokensResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *developerToken;
@property (readonly, copy, nonatomic) NSString *userToken;
@property (readonly, copy, nonatomic) NSError *userTokenFetchingError;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionForDebugging:(BOOL)a0;
- (id)_descriptionOfToken:(id)a0 forDebugging:(BOOL)a1;
- (id)initWithDeveloperToken:(id)a0 userToken:(id)a1 userTokenFetchingError:(id)a2;

@end
