@class NSString;

@interface HDAUserClient : NSObject

@property (nonatomic) unsigned long long deviceType;
@property (readonly) unsigned int connection;
@property (readonly, copy, nonatomic) NSString *deviceName;

+ (unsigned int)serviceWithEngineClass:(id)a0 controlSubtype:(unsigned int)a1 andControlValue:(unsigned int)a2;

- (void)dealloc;
- (id)description;
- (id)initWithService:(unsigned int)a0;
- (id)initWithService:(unsigned int)a0 andClientType:(unsigned int)a1;

@end
