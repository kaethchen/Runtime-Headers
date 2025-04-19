@class TMTarget, NSDate;

@interface TMQueryTarget : NSObject

@property (readonly, copy) TMTarget *originTarget;
@property (readonly, copy) NSDate *originBackupDate;
@property (readonly) unsigned long long originFileID;
@property (readonly) int originDeviceID;
@property (readonly, copy) NSDate *revisionDate;
@property (readonly) struct TMQueryTargetKey { unsigned long long x0; int x1; double x2; } targetKey;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithOriginTarget:(id)a0 backupDate:(id)a1 deviceID:(int)a2 fileID:(unsigned long long)a3 revisionDate:(id)a4;

@end
