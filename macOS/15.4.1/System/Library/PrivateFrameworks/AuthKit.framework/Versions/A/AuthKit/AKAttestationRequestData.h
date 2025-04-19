@class NSString, NSDictionary, NSURL, NSData;

@interface AKAttestationRequestData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSURL *requestURL;
@property (readonly, nonatomic) NSData *signingDataHash;
@property (readonly, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSString *clientName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequest:(id)a0 requiredHeaders:(id)a1;
- (id)initWithSigningData:(id)a0 requiredHeaders:(id)a1;

@end
