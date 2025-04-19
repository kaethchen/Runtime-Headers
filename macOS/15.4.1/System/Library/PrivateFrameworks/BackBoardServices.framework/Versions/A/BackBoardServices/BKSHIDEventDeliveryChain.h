@class NSArray, NSString, BKSEventDeferringChainIdentity, BKSHIDEventDisplay, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventDeliveryChain : NSObject <BSDescriptionStreamable, NSSecureCoding, BSProtobufSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSEventDeferringChainIdentity *identity;
@property (readonly, nonatomic) BKSHIDEventDisplay *compatibilityDisplay;
@property (readonly, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly, copy, nonatomic) NSArray *deferringPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)protobufSchema;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)initForProtobufDecoding;
- (id)_dataProtobufEncoded;
- (id)_protobufDecodedFromData:(id)a0;
- (id)initWithIdentity:(id)a0 compatibilityDisplay:(id)a1 path:(id)a2;

@end
