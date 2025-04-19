@class NSMutableArray;

@interface BYFindAndMountVolumesOperation : BYOperation

@property BOOL mountedSourcePrebootVolume;
@property BOOL mountedTargetPrebootVolume;
@property BOOL mountedISCPrebootVolume;
@property BOOL mountedTargetRecoveryVolume;
@property BOOL mountedExternalRecoveryVolume;
@property (retain) NSMutableArray *lockDescriptors;

- (id)description;
- (void).cxx_destruct;
- (void)main;
- (id)initWithRequest:(id)a0;
- (BOOL)_ensureReadWriteMountForVolume:(id)a0;
- (BOOL)_openLockFileForVolume:(id)a0;
- (void)cleanUpAfterSuccess:(BOOL)a0;

@end
