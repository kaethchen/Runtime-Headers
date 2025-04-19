@class NSUUID, NSMutableDictionary, NSString, NSMutableArray;
@protocol FRJSMessagingDelegate, FRJSObjectDelegate;

@interface FRJSObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *objectID;
@property (retain, nonatomic) NSMutableDictionary *jsObjects;
@property (retain, nonatomic) NSMutableDictionary *properties;
@property (retain, nonatomic) NSMutableArray *registeredProperties;
@property (retain, nonatomic) NSMutableArray *registeredFunctions;
@property (nonatomic) BOOL isBundleObject;
@property (weak, nonatomic) id<FRJSMessagingDelegate> messagingDelegate;
@property (readonly, nonatomic) NSString *javaScriptClassName;
@property (weak, nonatomic) id<FRJSObjectDelegate> delegate;

+ (Class)classForKeyedUnarchiver;
+ (id)objectForIdentifier:(id)a0;
+ (void)addObjectToGlobalCache:(id)a0;
+ (struct OpaqueJSClass { } *)jsClassForClassName:(id)a0;
+ (void)setJSClass:(struct OpaqueJSClass { } *)a0 forClassName:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addProperties:(id)a0;
- (void)addProperty:(id)a0;
- (BOOL)hasProperty:(id)a0;
- (id)getProperty:(id)a0;
- (id)doAction:(id)a0;
- (void)protect;
- (void)_addFunction:(id)a0 sendMessage:(BOOL)a1;
- (void)_addProperty:(id)a0 sendMessage:(BOOL)a1;
- (void)_setProperty:(id)a0 toValue:(id)a1 sendMessage:(BOOL)a2;
- (void)addFunction:(id)a0;
- (void)addFunctions:(id)a0;
- (id)callFunction:(id)a0 withArguments:(id)a1;
- (id)initWithJavaScriptClassName:(id)a0;
- (struct OpaqueJSValue { } *)jsObjectInContext:(struct OpaqueJSContext { } *)a0;
- (void)setProperty:(id)a0 toArray:(id)a1;
- (void)setProperty:(id)a0 toDictionary:(id)a1;
- (void)setProperty:(id)a0 toNumber:(id)a1;
- (void)setProperty:(id)a0 toObject:(id)a1;
- (void)setProperty:(id)a0 toString:(id)a1;
- (void)unprotect;

@end
