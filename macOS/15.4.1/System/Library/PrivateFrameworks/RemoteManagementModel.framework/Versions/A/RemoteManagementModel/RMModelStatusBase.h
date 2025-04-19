@class NSString;

@interface RMModelStatusBase : RMModelPayloadBase

@property (class, readonly, copy) NSString *statusItemType;

@property (readonly) BOOL isArrayValue;

+ (BOOL)isSupportedStatusItem:(id)a0 platform:(long long)a1 scope:(long long)a2;
+ (id)stubObjectForStatusItemType:(id)a0;

- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;
- (BOOL)loadPayloadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializePayloadWithType:(short)a0;

@end
