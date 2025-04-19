@interface AVB17221AECPAEMGetPTPPortPDelayMonitoringRecordCommand : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short recordIndex;

+ (id)responseMessage;
+ (id)keyPathsForValuesAffectingRecordIndex;

- (id)init;
- (void)setRecordIndex:(unsigned short)a0;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned short)recordIndex;

@end
