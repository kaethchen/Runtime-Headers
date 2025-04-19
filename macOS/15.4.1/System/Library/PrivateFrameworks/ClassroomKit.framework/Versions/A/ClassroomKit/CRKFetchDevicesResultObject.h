@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *connectedDevices;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
