@class NSString, NSObject;
@protocol OS_xpc_object;

@interface GEOXPCMessage : NSObject {
    NSObject<OS_xpc_object> *_object;
}

@property (class, readonly, nonatomic) NSString *messageName;

+ (BOOL)canDecodeFromXPCDictionary:(id)a0;
+ (id)decodeFromXPCDictionary:(id)a0 error:(id *)a1;

- (id)description;
- (void).cxx_destruct;
- (void)send:(id)a0;
- (id)_prepareMessage;
- (BOOL)sendSync:(id)a0 error:(id *)a1;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
