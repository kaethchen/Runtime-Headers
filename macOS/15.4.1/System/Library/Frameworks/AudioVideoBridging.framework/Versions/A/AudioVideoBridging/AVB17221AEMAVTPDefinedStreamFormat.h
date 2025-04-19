@interface AVB17221AEMAVTPDefinedStreamFormat : AVB17221AEMStreamFormat

@property (readonly) unsigned char subtype;

+ (id)keyPathsForValuesAffectingSubtype;

- (unsigned char)subtype;
- (void)setSubtype:(unsigned char)a0;

@end
