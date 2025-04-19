@class KTIDMSDevice, KTLoggableData, NSError;

@interface KTDeviceStatus : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) KTIDMSDevice *idms;
@property (retain) KTLoggableData *loggableData;
@property (retain) NSError *loggableDataError;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
