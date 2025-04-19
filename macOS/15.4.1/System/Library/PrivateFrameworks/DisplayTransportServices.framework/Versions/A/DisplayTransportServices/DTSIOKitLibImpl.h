@class NSString;

@interface DTSIOKitLibImpl : NSObject <DTSIOKitLib>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)PMAssertionWithType:(struct __CFString { } *)a0 level:(unsigned int)a1 name:(struct __CFString { } *)a2 error:(int *)a3;
- (id)makeServiceForService:(unsigned int)a0;
- (id)matchingDictionaryForClass:(const char *)a0;
- (id)matchingDictionaryForRegistryEntryID:(unsigned long long)a0;
- (id)serviceForPort:(unsigned int)a0 matchingDictionary:(id)a1;

@end
