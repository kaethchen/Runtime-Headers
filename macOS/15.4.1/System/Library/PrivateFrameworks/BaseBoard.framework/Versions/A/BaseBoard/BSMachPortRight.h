@class NSString;

@interface BSMachPortRight : NSObject <BSXPCCoding, NSSecureCoding, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    unsigned int _lock_port;
    unsigned int _rawPort;
    char _type;
    char _owner;
    unsigned char _lock_accessCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *trace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)_type;

- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (unsigned int)port;
- (unsigned int)rawPort;
- (void)accessPort:(id /* block */)a0;
- (void)encodeWithXPCDictionary:(id)a0;
- (unsigned int)extractPort;
- (unsigned int)extractPortAndIKnowWhatImDoingISwear;
- (id)initWithXPCDictionary:(id)a0;
- (BOOL)isUsable;
- (BOOL)matchesPortOfRight:(id)a0;

@end
