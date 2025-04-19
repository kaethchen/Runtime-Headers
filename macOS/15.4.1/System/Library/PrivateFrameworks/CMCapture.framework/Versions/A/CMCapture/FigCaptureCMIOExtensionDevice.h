@class NSSet, NSString;

@interface FigCaptureCMIOExtensionDevice : CMIOExtensionDevice <CMIOExtensionDeviceSource>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy) NSSet *availableProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithType:(unsigned long long)a0;
- (id)devicePropertiesForProperties:(id)a0 error:(id *)a1;
- (BOOL)setDeviceProperties:(id)a0 error:(id *)a1;
- (id)createStreamOfType:(unsigned long long)a0;

@end
