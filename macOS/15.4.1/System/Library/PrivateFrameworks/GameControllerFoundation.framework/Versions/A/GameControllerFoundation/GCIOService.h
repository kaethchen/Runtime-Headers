@class NSString;

@interface GCIOService : GCIORegistryEntry <GCIOService>

@property (class, readonly) NSString *className;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (readonly) NSString *className;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)addInterestNotification:(id)a0 type:(const char *)a1 handler:(id /* block */)a2;
- (struct IOCFPlugInInterfaceStruct **)createCFPlugInInterface:(struct __CFUUID { } *)a0 score:(int *)a1 error:(id *)a2;
- (id)initWithPort:(unsigned int)a0 error:(id *)a1;

@end
