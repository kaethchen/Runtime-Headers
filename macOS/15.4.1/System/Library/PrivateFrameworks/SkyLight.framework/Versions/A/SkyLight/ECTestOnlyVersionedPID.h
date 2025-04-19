@interface ECTestOnlyVersionedPID : NSObject <ECVersionedPID>

@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) unsigned int version;

- (int)pid;
- (unsigned int)version;

@end
