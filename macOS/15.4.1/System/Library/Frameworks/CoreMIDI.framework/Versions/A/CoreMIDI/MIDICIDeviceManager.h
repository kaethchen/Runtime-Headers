@class NSArray, NSMutableArray;

@interface MIDICIDeviceManager : NSObject

@property (class, readonly, nonatomic) MIDICIDeviceManager *sharedInstance;

@property (retain, nonatomic) NSMutableArray *devices;
@property (retain, nonatomic) NSMutableArray *profiles;
@property (readonly, nonatomic) unsigned int serverMUID;
@property (readonly, copy, nonatomic) NSArray *discoveredCIDevices;

+ (id)description;

- (id)init;
- (void).cxx_destruct;
- (void)addDevice:(id)a0;
- (BOOL)removeDevice:(unsigned int)a0;
- (void)addProfile:(id)a0;
- (id)findDevice:(unsigned int)a0;
- (id)findProfile:(unsigned int)a0;
- (struct optional<std::pair<MIDICIDevice *, MIDIUMPCIProfile *>> { union { char x0; struct pair<MIDICIDevice *, MIDIUMPCIProfile *> { id x0; id x1; } x1; } x0; BOOL x1; })findProfileAndDevice:(unsigned int)a0;
- (BOOL)postNotificationName:(id)a0 device:(id)a1 profile:(id)a2;
- (BOOL)removeProfile:(unsigned int)a0;
- (void)setServerMUID:(unsigned int)a0;
- (void)updateDevice:(unsigned int)a0 description:(id)a1;
- (void)updateProfile:(unsigned int)a0 description:(id)a1;

@end
