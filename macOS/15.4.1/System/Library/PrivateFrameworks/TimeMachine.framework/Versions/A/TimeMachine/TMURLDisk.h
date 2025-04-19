@class NSString, NSNumber;

@interface TMURLDisk : NSObject

@property (readonly) unsigned long long traits;
@property (readonly, copy) NSString *nsURLVolumeName;
@property (readonly) NSNumber *bytesFree;

- (void).cxx_destruct;
- (id)initWithMountPoint:(id)a0 error:(id *)a1;

@end
