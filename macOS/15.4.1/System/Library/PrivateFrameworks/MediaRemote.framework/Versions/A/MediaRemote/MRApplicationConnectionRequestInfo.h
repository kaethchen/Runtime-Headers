@class NSData, _MRApplicationConnectionRequestInfoProtobuf, MRClient, MRDeviceInfo;

@interface MRApplicationConnectionRequestInfo : NSObject

@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) _MRApplicationConnectionRequestInfoProtobuf *protobuf;
@property (readonly, nonatomic) MRClient *client;
@property (readonly, nonatomic) MRDeviceInfo *deviceInfo;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceInfo:(id)a0 client:(id)a1;
- (id)initWithProtobuf:(id)a0;
- (id)initWithProtobufData:(id)a0;

@end
