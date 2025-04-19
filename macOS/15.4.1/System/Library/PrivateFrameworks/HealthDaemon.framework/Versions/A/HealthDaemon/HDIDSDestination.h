@interface HDIDSDestination : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id /* block */ deviceFilterBlock;

+ (id)initWithAllowedDeviceTypes:(id)a0;
+ (id)validHealthSoftwareDeviceTypes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDeviceFilterBlock:(id /* block */)a0;

@end
