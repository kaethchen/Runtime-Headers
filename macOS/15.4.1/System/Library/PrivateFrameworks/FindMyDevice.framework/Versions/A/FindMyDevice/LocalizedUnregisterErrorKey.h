@class NSString;

@interface LocalizedUnregisterErrorKey : NSObject

@property (nonatomic) long long responseErrorType;
@property (nonatomic) unsigned long long context;
@property (nonatomic) long long deviceClass;
@property (readonly, nonatomic) NSString *okButtonKey;
@property (readonly, nonatomic) NSString *textKey;
@property (readonly, nonatomic) NSString *titleKey;

- (id)keyForType:(id)a0;
- (id)deviceTypeStringForDeviceClass:(long long)a0;
- (id)errorTypeString;
- (id)errorContextStringForDisableContext:(unsigned long long)a0;
- (id)initWithUnregisterError:(long long)a0 context:(unsigned long long)a1 deviceClass:(long long)a2;

@end
