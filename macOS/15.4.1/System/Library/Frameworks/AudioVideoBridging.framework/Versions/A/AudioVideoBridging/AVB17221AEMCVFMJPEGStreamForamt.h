@interface AVB17221AEMCVFMJPEGStreamForamt : AVB17221AEMCVFStreamFormat

@property (getter=isProgressiveScan) BOOL progressiveScan;
@property unsigned char type;
@property unsigned char width;
@property unsigned char height;

+ (id)keyPathsForValuesAffectingWidth;
+ (id)keyPathsForValuesAffectingHeight;
+ (id)keyPathsForValuesAffectingProgressiveScan;
+ (id)keyPathsForValuesAffectingType;

- (id)init;
- (unsigned int)maximumPDUSize;

@end
