@class NSString, NSDate;

@interface _NSHTTPAlternativeServiceEntry : NSObject <NSCopying>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *alternateHost;
@property (nonatomic) long long port;
@property (nonatomic) long long alternatePort;
@property (retain, nonatomic) NSString *partition;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) long long serviceType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
