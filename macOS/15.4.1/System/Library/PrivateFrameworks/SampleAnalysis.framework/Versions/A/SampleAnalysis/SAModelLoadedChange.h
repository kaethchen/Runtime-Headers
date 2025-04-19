@class NSString, SATimestamp, NSArray;

@interface SAModelLoadedChange : NSObject <SASerializable, SAJSONSerialization>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *timestamp;
@property (readonly) SATimestamp *endTime;
@property (readonly) BOOL loaded;
@property (readonly) BOOL inMemory;
@property (readonly) BOOL userInitiated;
@property (readonly) NSArray *loadedRequesters;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

@end
