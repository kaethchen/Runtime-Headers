@interface AVB17221AEM61883StreamFormat : AVB17221AEMAVTPDefinedStreamFormat

@property unsigned char headerVersion;
@property (readonly) unsigned char fmt;

+ (id)keyPathsForValuesAffectingFmt;

- (id)init;
- (unsigned char)fmt;
- (void)setFmt:(unsigned char)a0;

@end
