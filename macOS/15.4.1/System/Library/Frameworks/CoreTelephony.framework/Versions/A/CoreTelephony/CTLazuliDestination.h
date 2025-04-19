@class NSString, CTLazuliAlternateIdentities;

@interface CTLazuliDestination : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *extractedUri;
@property (nonatomic) BOOL isBot;
@property (retain, nonatomic) CTLazuliAlternateIdentities *identities;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *conversationID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const void *)a0;
- (BOOL)isEqualToCTLazuliDestination:(id)a0;

@end
