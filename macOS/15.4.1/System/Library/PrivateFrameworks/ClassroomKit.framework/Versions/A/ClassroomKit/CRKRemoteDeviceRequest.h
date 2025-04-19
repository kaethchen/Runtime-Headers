@class NSString, CATTaskRequest;

@interface CRKRemoteDeviceRequest : CATTaskRequest

@property (copy, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) CATTaskRequest *remoteRequest;

+ (BOOL)supportsSecureCoding;
+ (Class)allowlistedClassForResultObject;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
