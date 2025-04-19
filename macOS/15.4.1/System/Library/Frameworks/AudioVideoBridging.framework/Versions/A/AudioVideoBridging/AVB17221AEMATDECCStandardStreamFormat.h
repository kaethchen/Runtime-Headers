@interface AVB17221AEMATDECCStandardStreamFormat : AVB17221AEMATDECCDefinedStreamFormat

@property unsigned char subtype;

+ (id)keyPathsForValuesAffectingSubtype;

- (id)init;
- (unsigned char)subtype;
- (void)setSubtype:(unsigned char)a0;

@end
