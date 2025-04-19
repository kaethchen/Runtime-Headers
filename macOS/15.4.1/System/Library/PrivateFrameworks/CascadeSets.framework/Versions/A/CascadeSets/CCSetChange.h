@class NSArray, CCSharedItem;

@interface CCSetChange : NSObject

@property (readonly, nonatomic) CCSharedItem *sharedItem;
@property (readonly, nonatomic) unsigned short sharedItemChangeType;
@property (readonly, nonatomic) NSArray *allDevices;
@property (readonly, nonatomic) NSArray *addedDevices;
@property (readonly, nonatomic) NSArray *removedDevices;
@property (readonly, nonatomic) NSArray *allLocalInstances;
@property (readonly, nonatomic) NSArray *addedLocalInstances;
@property (readonly, nonatomic) NSArray *removedLocalInstances;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSharedItem:(id)a0 sharedItemChangeType:(unsigned short)a1 allDevices:(id)a2 addedDevices:(id)a3 removedDevices:(id)a4 allLocalInstances:(id)a5 addedLocalInstances:(id)a6 removedLocalInstances:(id)a7;
- (BOOL)isEqualToSetChange:(id)a0;

@end
