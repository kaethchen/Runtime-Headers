@class BKSHIDEventDisplay, NSString, BKSHIDEventDeferringEnvironment;

@interface BKSEventDeferringChainIdentity : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable> {
    BKSHIDEventDisplay *_display;
    BKSHIDEventDeferringEnvironment *_environment;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BKSHIDEventDisplay *display;
@property (readonly, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)build:(id /* block */)a0;
+ (id)protobufSchema;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (id)initForProtobufDecoding;
- (id)initWithDisplay:(id)a0 environment:(id)a1;

@end
