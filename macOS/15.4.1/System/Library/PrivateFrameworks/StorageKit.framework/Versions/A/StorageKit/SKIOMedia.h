@class NSString;

@interface SKIOMedia : SKIOObject

@property (readonly, copy) NSString *BSDName;

- (id)copyBlockDevice;
- (id)initWithDADisk:(id)a0;
- (id)initWithDevName:(id)a0;

@end
