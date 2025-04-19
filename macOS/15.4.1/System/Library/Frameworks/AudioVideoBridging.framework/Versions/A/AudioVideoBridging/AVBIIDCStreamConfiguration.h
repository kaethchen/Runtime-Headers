@class AVB17221AEMVideoSize, AVB17221AEMSamplingRate;

@interface AVBIIDCStreamConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) AVB17221AEMSamplingRate *maximumFrameRate;
@property (copy, nonatomic) AVB17221AEMSamplingRate *minimumFrameRate;
@property (copy, nonatomic) AVB17221AEMVideoSize *frameSize;
@property (nonatomic) unsigned short colorSpace;
@property (nonatomic) unsigned char headerVersion;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
