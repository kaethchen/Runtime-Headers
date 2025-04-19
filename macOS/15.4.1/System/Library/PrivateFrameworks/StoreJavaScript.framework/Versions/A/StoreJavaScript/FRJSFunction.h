@class NSUUID;
@protocol FRJSMessagingDelegate;

@interface FRJSFunction : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct OpaqueJSValue { } *jsFunction;
@property (readonly, nonatomic) struct OpaqueJSContext { } *jsContext;
@property (readonly, nonatomic) NSUUID *functionID;
@property (nonatomic) BOOL capture;
@property (weak, nonatomic) id<FRJSMessagingDelegate> messagingDelegate;

+ (void)addFunctionToGlobalCache:(id)a0;
+ (id)functionForIdentifier:(id)a0;
+ (id)functionForJSFunction:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)callWithArguments:(id)a0;
- (void)doAction:(id)a0;
- (void)protect;
- (id)initWithJavaScriptFunction:(struct OpaqueJSValue { } *)a0 inContext:(struct OpaqueJSContext { } *)a1;
- (struct OpaqueJSValue { } *)jsObjectInContext:(struct OpaqueJSContext { } *)a0;
- (void)unprotect;

@end
