@class NSArray, NSObject;
@protocol OS_xpc_object;

@interface REAudioGroupPayload : RESharedResourcePayload {
    NSObject<OS_xpc_object> *_buffer;
}

@property (readonly, nonatomic) NSArray *payloads;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPayloads:(id)a0;

@end
