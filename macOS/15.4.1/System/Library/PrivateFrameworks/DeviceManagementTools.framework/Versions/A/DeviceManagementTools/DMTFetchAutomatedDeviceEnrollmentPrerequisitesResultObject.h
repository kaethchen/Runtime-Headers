@class NSString;

@interface DMTFetchAutomatedDeviceEnrollmentPrerequisitesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) NSString *deviceUDID;
@property (copy, nonatomic) NSString *modelIdentifier;
@property (copy, nonatomic) NSString *modelName;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
