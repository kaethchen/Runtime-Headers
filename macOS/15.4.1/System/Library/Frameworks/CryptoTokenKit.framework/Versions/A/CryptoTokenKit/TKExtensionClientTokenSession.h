@class NSNumber, NSArray, NSString;

@interface TKExtensionClientTokenSession : TKClientTokenSession {
    long long _connectionIdentifier;
    NSArray *_advertisedItems;
    NSString *_slotName;
}

@property (readonly, nonatomic) NSNumber *sessionID;

- (void)dealloc;
- (void).cxx_destruct;
- (id)keys;
- (id)identities;
- (void)terminate;
- (id)certificates;
- (id)createObjectWithAttributes:(id)a0 error:(id *)a1;
- (id)initWithToken:(id)a0 LAContext:(id)a1 parameters:(id)a2 error:(id *)a3;
- (id)objectForObjectID:(id)a0 error:(id *)a1;
- (id)advertisedItems;
- (id)withError:(id *)a0 accessControl:(struct __SecAccessControl { } *)a1 invoke:(id /* block */)a2;
- (BOOL)ensureSessionWithClient:(id)a0 connectionIdentifier:(long long)a1 error:(id *)a2;
- (BOOL)evaluateAccessControl:(id)a0 forOperation:(id)a1 error:(id *)a2;
- (BOOL)isValidWithError:(id *)a0;
- (id)itemsOfClass:(id)a0;
- (id)slotName;

@end
