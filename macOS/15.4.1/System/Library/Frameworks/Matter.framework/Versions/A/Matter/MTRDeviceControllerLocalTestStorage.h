@class NSString;
@protocol MTRDeviceControllerStorageDelegate;

@interface MTRDeviceControllerLocalTestStorage : NSObject <MTRDeviceControllerStorageDelegate> {
    id<MTRDeviceControllerStorageDelegate> _passThroughStorage;
}

@property (class, nonatomic) BOOL localTestStorageEnabled;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)controller:(id)a0 removeValueForKey:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;
- (BOOL)controller:(id)a0 storeValue:(id)a1 forKey:(id)a2 securityLevel:(unsigned long long)a3 sharingType:(unsigned long long)a4;
- (BOOL)controller:(id)a0 storeValues:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;
- (id)controller:(id)a0 valueForKey:(id)a1 securityLevel:(unsigned long long)a2 sharingType:(unsigned long long)a3;
- (id)initWithPassThroughStorage:(id)a0;
- (id)valuesForController:(id)a0 securityLevel:(unsigned long long)a1 sharingType:(unsigned long long)a2;

@end
