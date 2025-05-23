@class NSString, IDSURI;

@interface IDSDestinationGroupSessionMember : IDSDestination

@property (readonly, nonatomic) NSString *uri;
@property (readonly, nonatomic) IDSURI *URIObject;
@property (readonly, nonatomic) BOOL isLightWeight;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURI:(id)a0;
- (id)destinationURIs;
- (id)destinationLightweightStatus;
- (id)initWithURI:(id)a0 isLightWeight:(BOOL)a1;
- (id)initWithURIObject:(id)a0 isLightWeight:(BOOL)a1;
- (BOOL)isDevice;

@end
