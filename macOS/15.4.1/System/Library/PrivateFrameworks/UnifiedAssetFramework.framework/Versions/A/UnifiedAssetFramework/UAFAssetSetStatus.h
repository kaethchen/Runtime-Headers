@interface UAFAssetSetStatus : NSObject

@property (readonly) double completedPercent;
@property (readonly) unsigned long long completedBytes;
@property (readonly) unsigned long long totalBytes;
@property (readonly) unsigned long long downloadStatus;

- (id)initWithStatus:(unsigned long long)a0 percent:(double)a1 completedBytes:(unsigned long long)a2 totalBytes:(unsigned long long)a3;

@end
