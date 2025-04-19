@class NSArray, NSSet, NSMutableSet, NSMutableArray;

@interface CoreCECPhysicalDevice : NSObject {
    NSMutableArray *_children;
    NSMutableSet *_logicalDevices;
}

@property (nonatomic) CoreCECPhysicalDevice *parent;
@property (readonly, nonatomic) unsigned short physicalAddress;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSSet *logicalDevices;
@property (readonly, nonatomic) id propertyList;

+ (id)physicalDeviceTreeWithLogicalDevices:(id)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (long long)compare:(id)a0;
- (id)propertyList;
- (void)addChild:(id)a0;
- (void)addLogicalDevice:(id)a0;
- (id)initWithLogicalDevice:(id)a0;
- (id)initWithPhysicalAddress:(unsigned short)a0;

@end
