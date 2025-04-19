@class NSDictionary, NSXPCConnection, NSObject;
@protocol OS_os_transaction;

@interface MGServiceClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (copy, nonatomic) NSDictionary *queries;
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (readonly, retain, nonatomic) NSXPCConnection *connection;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)addQuery:(id)a0;
- (void)enumerateQueriesUsingBlock:(id /* block */)a0;
- (id)outstandingQueryForIdentifier:(id)a0;
- (void)removeQuery:(id)a0;

@end
