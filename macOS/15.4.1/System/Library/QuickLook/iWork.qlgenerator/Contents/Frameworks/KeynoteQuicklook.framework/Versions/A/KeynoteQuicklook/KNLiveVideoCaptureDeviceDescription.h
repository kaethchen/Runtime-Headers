@class KNLiveVideoCaptureDeviceIdentifier;

@interface KNLiveVideoCaptureDeviceDescription : TSCKSosBase <NSCopying>

@property (readonly, nonatomic) KNLiveVideoCaptureDeviceIdentifier *identifier;
@property (readonly, nonatomic) struct CGSize { double width; double height; } defaultVideoResolution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 defaultVideoResolution:(struct CGSize { double x0; double x1; })a1;
- (id)initWithMessage:(const void *)a0 unarchiver:(id)a1;
- (void)saveToMessage:(void *)a0 archiver:(id)a1;

@end
