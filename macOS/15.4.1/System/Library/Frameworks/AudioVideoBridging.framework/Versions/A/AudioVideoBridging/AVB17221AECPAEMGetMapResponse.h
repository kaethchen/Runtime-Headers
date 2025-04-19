@interface AVB17221AECPAEMGetMapResponse : AVB17221AECPAEMDescriptorMessage

@property (nonatomic) unsigned short mapIndex;
@property (nonatomic) unsigned short numberOfMaps;

+ (id)keyPathsForValuesAffectingMapIndex;
+ (id)keyPathsForValuesAffectingNumberOfMaps;

- (unsigned short)mapIndex;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (unsigned short)numberOfMaps;
- (void)setMapIndex:(unsigned short)a0;
- (void)setNumberOfMaps:(unsigned short)a0;

@end
