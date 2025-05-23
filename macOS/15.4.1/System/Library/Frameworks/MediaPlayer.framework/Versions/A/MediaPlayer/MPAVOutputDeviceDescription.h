@class NSString;

@interface MPAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic) long long routeType;
@property (readonly, nonatomic) long long routeSubtype;
@property (readonly, nonatomic) NSString *uid;
@property (readonly, nonatomic) NSString *modelID;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDeviceType:(long long)a0 deviceSubtype:(long long)a1 uid:(id)a2;
- (id)initWithDeviceType:(long long)a0 deviceSubtype:(long long)a1 uid:(id)a2 modelID:(id)a3;

@end
