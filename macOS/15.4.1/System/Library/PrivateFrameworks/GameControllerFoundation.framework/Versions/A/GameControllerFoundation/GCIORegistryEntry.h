@class NSString;

@interface GCIORegistryEntry : GCIOObject <GCIORegistryEntry>

@property (class, readonly) NSString *className;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (readonly) NSString *className;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)propertyForKey:(id)a0;
- (id)redactedDescription;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)propertyForKey:(id)a0 inPlane:(const char *)a1 options:(unsigned int)a2;
- (id)initWithPort:(unsigned int)a0 error:(id *)a1;

@end
