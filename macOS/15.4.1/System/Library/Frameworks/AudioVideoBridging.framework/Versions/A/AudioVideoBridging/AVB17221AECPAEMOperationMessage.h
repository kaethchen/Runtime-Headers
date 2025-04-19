@interface AVB17221AECPAEMOperationMessage : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short operationID;
@property (nonatomic) unsigned short operationType;

+ (id)keyPathsForValuesAffectingOperationID;
+ (id)keyPathsForValuesAffectingOperationType;

- (unsigned short)operationID;
- (void)setOperationID:(unsigned short)a0;
- (unsigned short)operationType;
- (void)setOperationType:(unsigned short)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;

@end
