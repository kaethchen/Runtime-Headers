@class NSString, NSXPCConnection, NSSet, NSDate, BMDSL, BMDSLSubscriber;

@interface BMComputeSubscription : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *client;
@property (retain, nonatomic) NSDate *initialBookmarkTimestamp;
@property (nonatomic) BOOL pendingDemand;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic, getter=isUnclaimed) BOOL unclaimed;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *useCase;
@property (readonly, nonatomic) BOOL waking;
@property (readonly, nonatomic) NSSet *streamIdentifiers;
@property (readonly, nonatomic) NSSet *postMigrationStreamIdentifiers;
@property (readonly, nonatomic) BMDSL *graph;
@property (readonly, nonatomic) BMDSLSubscriber *subscriber;
@property (readonly, nonatomic) id /* block */ block;
@property (readonly, nonatomic) unsigned long long token;
@property (readonly, nonatomic) NSDate *createdAt;

+ (id)new;
+ (id)storageForIdentifier:(id)a0;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)fetchBookmarkFromStorage:(id)a0 error:(id *)a1;
- (id)XPCEvent;
- (id)initWithIdentifier:(id)a0 client:(id)a1 createdAt:(id)a2 waking:(BOOL)a3 DSLGraph:(id)a4 subscriber:(id)a5 block:(id /* block */)a6;
- (id)initWithIdentifier:(id)a0 client:(id)a1 waking:(BOOL)a2 DSLGraph:(id)a3 block:(id /* block */)a4;
- (id)initWithToken:(unsigned long long)a0 descriptor:(id)a1;

@end
