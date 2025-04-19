@class NSUUID;

@interface HMDActionSetResponse : HMFObject {
    void /* unknown type, empty encoding */ internalActionSetUUID;
}

@property (nonatomic, readonly) NSUUID *actionSetUUID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ state;

+ (id)responsesFromSerializedResponses:(id)a0;
+ (id)serializeWithResponses:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithActionSetUUID:(id)a0 state:(BOOL)a1;

@end
