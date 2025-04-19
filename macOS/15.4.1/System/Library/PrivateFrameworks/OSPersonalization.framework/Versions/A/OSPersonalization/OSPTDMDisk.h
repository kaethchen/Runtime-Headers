@interface OSPTDMDisk : NSObject

@property unsigned int tdm;

- (void)dealloc;
- (BOOL)boolForProperty:(id)a0;
- (id)initWithDiskAtMountPoint:(id)a0;
- (id)numberForProperty:(id)a0;
- (id)stringForProperty:(id)a0;

@end
