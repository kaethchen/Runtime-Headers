@class NSString, NSDictionary;

@interface MPDisplayPreset : NSObject {
    NSString *_presetName;
}

@property (readonly) unsigned int displayID;
@property (readonly) NSString *presetName;
@property (readonly) NSString *presetDescription;
@property (readonly) NSDictionary *presetDictionary;
@property (readonly) long long presetGroup;
@property (readonly) unsigned long long presetIndex;
@property (readonly) BOOL isValid;
@property (readonly) BOOL isWritable;

- (void)dealloc;
- (id)_getStringFromStringRef:(struct __CFString { } *)a0;
- (void)_initializeWithIndex:(unsigned int)a0 dictionary:(struct __CFDictionary { } *)a1 forDisplayID:(unsigned int)a2;
- (id)_mutableDictionaryWithNewSettings:(id)a0;
- (void)_safeCopyKey:(id)a0 fromDict:(id)a1 toDict:(id)a2;
- (id)initWithIndex:(unsigned int)a0 dictionary:(struct __CFDictionary { } *)a1 forDisplayID:(unsigned int)a2;
- (BOOL)makeInvalid;
- (BOOL)makeValidWithSettings:(id)a0;

@end
