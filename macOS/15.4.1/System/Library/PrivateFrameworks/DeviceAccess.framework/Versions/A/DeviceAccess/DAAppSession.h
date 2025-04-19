@class NSString;

@interface DAAppSession : NSObject <CUXPCCodable>

@property (copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (void)encodeWithXPCObject:(id)a0;
- (id)initWithXPCObject:(id)a0 error:(id *)a1;

@end
