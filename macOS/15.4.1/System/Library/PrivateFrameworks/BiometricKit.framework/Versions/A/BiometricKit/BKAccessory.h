@class NSString, NSUUID, NSData, BKDevice, BKAccessoryGroup;

@interface BKAccessory : NSObject {
    unsigned int _type;
    NSUUID *_uuid;
    unsigned int _flags;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isRemovable;
@property (readonly, copy, nonatomic) NSData *uid;
@property (readonly, nonatomic) BKAccessoryGroup *accessoryGroup;
@property (readonly, nonatomic) BKDevice *device;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAuthorized:(BOOL *)a0 error:(id *)a1;
- (id)initWithServerAccessory:(id)a0 device:(id)a1;
- (id)serverAccessory;
- (BOOL)isConnected:(BOOL *)a0 error:(id *)a1;
- (BOOL)isEqualToAccessory:(id)a0;
- (BOOL)isEqualToServerAccessory:(id)a0;

@end
