@class NSString;

@interface DoubleAgentManager : NSObject <DoubleAgentManagerOps>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)allocateXattrIn:(int)a0 fileSize:(long long)a1 named:(id)a2 sized:(unsigned long long)a3 how:(unsigned int)a4 reply:(id /* block */)a5;
- (void)listXattrsIn:(int)a0 fileSize:(long long)a1 reply:(id /* block */)a2;
- (void)lookupXattrIn:(int)a0 fileSize:(long long)a1 named:(id)a2 reply:(id /* block */)a3;
- (void)removeXattrOf:(int)a0 fileSize:(long long)a1 named:(id)a2 reply:(id /* block */)a3;

@end
