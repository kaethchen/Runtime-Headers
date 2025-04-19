@interface MAAutoAssetSuspendResumeForSoftwareUpdateSuspendWithNeededBytesRequestInfo : MAAutoAssetSuspendResumeForSoftwareUpdateRequestInfo

@property (readonly, nonatomic) unsigned long long neededBytes;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWitNeededBytes:(unsigned long long)a0;

@end
