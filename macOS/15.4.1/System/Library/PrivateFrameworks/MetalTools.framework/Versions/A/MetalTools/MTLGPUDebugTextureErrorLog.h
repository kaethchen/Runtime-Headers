@interface MTLGPUDebugTextureErrorLog : MTLGPUDebugGPULog

@property (nonatomic) int errorReason;
@property (nonatomic) unsigned char expectedTextureType;
@property (nonatomic) unsigned char actualTextureType;

- (id)description;

@end
