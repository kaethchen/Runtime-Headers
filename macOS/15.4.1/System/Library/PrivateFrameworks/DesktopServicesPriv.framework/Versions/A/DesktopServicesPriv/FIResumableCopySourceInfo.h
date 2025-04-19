@class NSURL, NSString;

@interface FIResumableCopySourceInfo : NSObject

@property (readonly, nonatomic) NSURL *targetURL;
@property (readonly, nonatomic) NSString *targetPath;
@property (readonly, nonatomic) NSString *sourcePath;
@property (readonly, nonatomic) NSString *sourceVolumeUUID;
@property (readonly, nonatomic) unsigned long long sourceInode;
@property (readonly, nonatomic) BOOL hasValidPropertiesForResuming;

+ (id)_newInfoWithSourceURL:(id)a0;
+ (id)invalidSourceInfo;
+ (BOOL)isPossibleResumableCopyTarget:(id)a0;
+ (id)newInfoWithSourceURLInfo:(void *)a0;
+ (struct optional<double> { union { char x0; double x1; } x0; BOOL x1; })readCheckpointTimeForPath:(const void *)a0;
+ (id)readInfoFromTargetURL:(id)a0;

- (void).cxx_destruct;
- (BOOL)_writeToTargetURL:(id)a0;
- (id)initWithSourcePath:(id)a0 volumeUUID:(id)a1 inode:(unsigned long long)a2;
- (id)initWithTargetURL:(id)a0 sourcePath:(id)a1 volumeUUID:(id)a2 inode:(unsigned long long)a3;
- (BOOL)isSuspendedCopyOfSourceURLInfo:(void *)a0 checkpointTime:(double *)a1;
- (BOOL)writeToTarget:(const void *)a0 useCheckpoints:(BOOL *)a1;

@end
