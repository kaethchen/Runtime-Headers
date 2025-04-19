@class AVB17221AEMStreamFormat;

@interface AVB17221AECPAEMStreamFormatMessage : AVB17221AECPAEMDescriptorMessage

@property (copy, nonatomic) AVB17221AEMStreamFormat *streamFormat;

+ (id)keyPathsForValuesAffectingStreamFormat;

- (id)streamFormat;
- (unsigned long long)minimumMutableCommandSpecificLength;
- (void)setStreamFormat:(id)a0;

@end
