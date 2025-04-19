@class CRKDeviceGestalt;

@interface CRKFetchDeviceGestaltResultObject : CATTaskResultObject

@property (retain, nonatomic) CRKDeviceGestalt *deviceGestalt;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
