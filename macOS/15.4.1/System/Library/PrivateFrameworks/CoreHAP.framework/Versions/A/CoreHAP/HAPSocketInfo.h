@class NSString, NSNumber, NSDictionary;

@interface HAPSocketInfo : HMFObject

@property (readonly, nonatomic) NSString *ipAddressString;
@property (readonly, nonatomic) NSNumber *port;
@property (readonly, nonatomic) NSString *ipAddressStringWithScope;
@property (readonly, nonatomic) long long ipAddressType;
@property (readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *shortDescription;

+ (id)shortDescription;
+ (id)ipAddressAddScopeWithAddress:(id)a0;
+ (id)ipAddressRemoveScopeWithAddress:(id)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithSocket:(const struct sockaddr_storage { unsigned char x0; unsigned char x1; char x2[6]; long long x3; char x4[112]; } *)a0;
- (id)initWithIPAddressString:(id)a0 ipAddressType:(long long)a1 port:(id)a2;
- (id)initWithIPAddressString:(id)a0 port:(id)a1;

@end
