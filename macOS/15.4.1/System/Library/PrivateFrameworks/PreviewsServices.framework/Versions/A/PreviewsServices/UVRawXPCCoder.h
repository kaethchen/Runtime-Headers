@class NSString, NSObject;
@protocol OS_xpc_object;

@interface UVRawXPCCoder : NSObject <AnySecureCoder>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (id)initWithXpcDictionary:(id)a0;

@end
