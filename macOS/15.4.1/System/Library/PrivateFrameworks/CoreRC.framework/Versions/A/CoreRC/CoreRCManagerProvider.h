@class CoreRCInterfaceController, NSArray, NSString, CoreCECOverride;

@interface CoreRCManagerProvider : CoreRCManager <CoreRCInterfaceControllerDelegate>

@property (retain, nonatomic) CoreCECOverride *standardOverride;
@property (retain, nonatomic) NSArray *pluginOverrides;
@property (readonly, nonatomic) CoreRCInterfaceController *interfaceController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)dealloc;
- (id)initWithSerialQueue:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1 ofBus:(id)a2 error:(id *)a3;
- (id)addDeviceWithBus:(id)a0 logicalAddress:(unsigned char)a1 physicalAddress:(unsigned short)a2 attributes:(id)a3 message:(id)a4 reason:(unsigned long long)a5;
- (id)addDeviceWithBus:(id)a0 transportProperties:(id)a1 error:(id *)a2;
- (id)createRCOverrideFromPaths:(id)a0;
- (id)extendedPropertyForKey:(id)a0 ofDevice:(id)a1 error:(id *)a2;
- (void)initCECOverrides;
- (void)initOverrides;
- (id)initWithSerialQueue:(id)a0 withoutPlugins:(BOOL)a1;
- (void)interfaceController:(id)a0 didAddInterface:(id)a1;
- (void)interfaceController:(id)a0 didRemoveInterface:(id)a1;
- (id)propertyForKey:(id)a0 ofBus:(id)a1 error:(id *)a2;
- (BOOL)setExtendedProperty:(id)a0 forKey:(id)a1 ofDevice:(id)a2 error:(id *)a3;

@end
