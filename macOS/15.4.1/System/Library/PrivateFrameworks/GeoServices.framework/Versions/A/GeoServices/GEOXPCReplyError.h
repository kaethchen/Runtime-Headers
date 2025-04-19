@class NSError, NSString, NSObject;
@protocol OS_xpc_object;

@interface GEOXPCReplyError : NSObject <GEOXPCReply, GEOXPCSerializable> {
    unsigned char _flags;
    NSObject<OS_xpc_object> *_object;
    unsigned long long _mode;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isValid;
- (void).cxx_destruct;
- (void)send;
- (id)initWithReplyObject:(id)a0 error:(id)a1 mode:(unsigned long long)a2;
- (void)encodeToXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;

@end
