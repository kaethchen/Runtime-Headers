@class NSMutableDictionary;

@interface NSServiceMaster : NSObject <NSServiceMasterProto> {
    NSMutableDictionary *_localObjects;
    id _reserved;
    struct { unsigned char serviceVendingIsActive : 1; unsigned int reserved : 31; } _serviceFlags;
}

+ (id)copyServiceForAppIdentifier:(id)a0 messageName:(id)a1;
+ (id)copyServiceForUUID:(id)a0;
+ (id)internalRunService:(id)a0 pboard:(id)a1 flags:(unsigned long long)a2 cancelledHint:(const BOOL *)a3;
+ (id)internalRunService:(id)a0 pboard:(id)a1 requestingApp:(id)a2 flags:(unsigned long long)a3 cancelledHint:(const BOOL *)a4;
+ (id)sharedServiceMaster;

- (void)dealloc;
- (id)init;
- (id)serviceListener;
- (void)registerObject:(id)a0 withServicePath:(id)a1;
- (id)objectForServicePath:(id)a0;
- (id)objectForServicePath:(id)a0 app:(id)a1 doLaunch:(BOOL)a2 limitDate:(id)a3;
- (id)objectForServicePath:(id)a0 app:(id)a1 doLaunch:(BOOL)a2 limitDate:(id)a3 basePortName:(id)a4;
- (void)unregisterObjectWithServicePath:(id)a0;

@end
