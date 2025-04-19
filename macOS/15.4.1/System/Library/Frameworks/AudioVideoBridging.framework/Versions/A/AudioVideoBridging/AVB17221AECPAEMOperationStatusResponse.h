@interface AVB17221AECPAEMOperationStatusResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short operationID;
@property (nonatomic) unsigned short percentComplete;

+ (id)commandMessage;
+ (id)keyPathsForValuesAffectingOperationID;
+ (id)keyPathsForValuesAffectingPercentComplete;

- (id)init;
- (unsigned short)operationID;
- (void)setOperationID:(unsigned short)a0;
- (unsigned short)percentComplete;
- (void)setPercentComplete:(unsigned short)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
