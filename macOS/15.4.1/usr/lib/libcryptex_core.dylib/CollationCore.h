@class NSMutableSet, NSObject;
@protocol OS_os_log, OS_dispatch_queue, OS_xpc_object;

@interface CollationCore : NSObject

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) unsigned int coll_uid;
@property (retain, nonatomic) NSMutableSet *coll_elems;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dq;
@property (retain, nonatomic) NSObject<OS_xpc_object> *listener;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (unsigned int)getID;
- (id)initWithID:(unsigned int)a0;
- (void)setupHandler;
- (BOOL)removeCollationElementWithPath:(id)a0;
- (BOOL)appendCollationElement:(id)a0;
- (id)createEndpoint;
- (void)enumerateCollationElements:(id /* block */)a0;
- (void)enumerateElements:(id /* block */)a0;
- (id)getValidPaths:(id)a0 forBundleID:(id)a1;
- (id)initWithXPC:(id)a0;
- (id)mountPointOfBundleID:(id)a0;
- (id)packToXPC;
- (void)parseMessage:(id)a0;

@end
