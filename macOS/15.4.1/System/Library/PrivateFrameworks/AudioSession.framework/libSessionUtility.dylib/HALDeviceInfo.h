@class NSString, NSArray;

@interface HALDeviceInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceUID;
@property (nonatomic) unsigned int deviceID;
@property (nonatomic) unsigned int transportType;
@property (nonatomic) unsigned char isAggregate;
@property (retain, nonatomic) NSArray *subdevices;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
