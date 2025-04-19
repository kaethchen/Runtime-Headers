@class EXSSyncEngine, NSString;

@interface EXSXPCServiceDelegate : NSObject <NSXPCListenerDelegate>

@property (retain, nonatomic) EXSSyncEngine *syncEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithSyncEngine:(id)a0;

@end
