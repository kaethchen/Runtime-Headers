@class NSString, NWInterface, NSData, NSObject;
@protocol OS_nw_endpoint;

@interface NWEndpoint : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_nw_endpoint> *internalEndpoint;
@property (retain, nonatomic) NWInterface *interface;
@property (readonly, nonatomic) NSString *parentEndpointDomain;
@property (readonly, copy, nonatomic) NSString *privateDescription;
@property (nonatomic) unsigned short alternatePort;
@property (nonatomic) long long remoteInterfaceType;
@property (retain, nonatomic) NSData *txtRecord;

+ (id)endpointWithCEndpoint:(id)a0;
+ (id)endpointWithProtocolBufferData:(id)a0;
+ (Class)copyClassForEndpointType:(int)a0;
+ (unsigned int)endpointType;
+ (id)endpointWithInternalEndpoint:(id)a0;
+ (BOOL)supportsResolverCallback;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (id)encodedData;
- (id)copyCEndpoint;
- (id)createProtocolBufferObject;
- (id)descriptionWithIndent:(int)a0 showFullContent:(BOOL)a1;
- (id)initWithEncodedData:(id)a0;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)a0;

@end
