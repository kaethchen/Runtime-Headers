@class NSMutableArray;

@interface CPIdentificationPayloads : NSObject

@property (retain) NSMutableArray *identifcationPayloads;

- (void)dealloc;
- (id)init;
- (id)initWithProfile:(id)a0;
- (id)copyIDPayloadDictForPayload:(id)a0;
- (BOOL)hasIDPayloads;
- (BOOL)isPasswordMethodSetToNone:(id)a0;
- (id)keyValueForIDPayloadType:(id)a0 forIDPayloadDict:(id)a1;
- (id)keyValueForIDPayloadType:(id)a0 forIDPayloadUUID:(id)a1;
- (id)mergeIDPayload:(id)a0 toPayload:(id)a1 usingMappingDict:(id)a2;
- (BOOL)validateRequiredKeysInPayloadProfile:(id)a0 forIDUUID:(id)a1 validationDict:(id)a2;

@end
