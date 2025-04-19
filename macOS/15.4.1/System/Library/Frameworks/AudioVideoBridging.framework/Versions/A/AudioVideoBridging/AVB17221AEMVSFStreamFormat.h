@interface AVB17221AEMVSFStreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned long long formatID;

+ (id)keyPathsForValuesAffectingFormatID;

- (id)init;
- (unsigned long long)formatID;
- (void)setFormatID:(unsigned long long)a0;

@end
