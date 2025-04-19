@interface AVB17221AEMVendorStreamFormat : AVB17221AEMATDECCDefinedStreamFormat

@property unsigned long long formatID;

+ (id)keyPathsForValuesAffectingFormatID;

- (id)init;
- (unsigned long long)formatID;
- (void)setFormatID:(unsigned long long)a0;

@end
