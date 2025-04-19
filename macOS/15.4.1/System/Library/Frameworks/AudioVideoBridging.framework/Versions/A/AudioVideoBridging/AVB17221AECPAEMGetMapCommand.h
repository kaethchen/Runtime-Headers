@interface AVB17221AECPAEMGetMapCommand : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short mapIndex;

+ (id)keyPathsForValuesAffectingMapIndex;

- (unsigned short)mapIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setMapIndex:(unsigned short)a0;

@end
