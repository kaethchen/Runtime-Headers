@class NSObject;
@protocol OS_dispatch_queue, TUDynamicCallDisplayContextDelegate;

@interface TUDynamicCallDisplayContext : TUMutableCallDisplayContext

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (weak, nonatomic) id<TUDynamicCallDisplayContextDelegate> delegate;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_initializeAsynchronousStateWithCall:(id)a0 cacheOnly:(BOOL)a1;
- (void)_initializeSynchronousStateWithCall:(id)a0 contactIdentifier:(id)a1 contactsDataProvider:(id)a2;
- (id)initWithCall:(id)a0 contactIdentifier:(id)a1 serialQueue:(id)a2;
- (id)initWithCall:(id)a0 contactIdentifier:(id)a1 serialQueue:(id)a2 cacheOnly:(BOOL)a3;
- (id)initWithCall:(id)a0 contactIdentifier:(id)a1 serialQueue:(id)a2 contactsDataSource:(id)a3;
- (id)initWithCall:(id)a0 contactIdentifier:(id)a1 serialQueue:(id)a2 contactsDataSource:(id)a3 cacheOnly:(BOOL)a4;
- (id)initWithDisplayContext:(id)a0 call:(id)a1 serialQueue:(id)a2;
- (id)initWithDisplayContext:(id)a0 call:(id)a1 serialQueue:(id)a2 cacheOnly:(BOOL)a3;

@end
