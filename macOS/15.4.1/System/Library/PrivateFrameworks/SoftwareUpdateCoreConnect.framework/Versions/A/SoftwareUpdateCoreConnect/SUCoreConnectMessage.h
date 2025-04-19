@class SUCoreConnectVersion, NSString, NSDictionary, NSSet, NSError;

@interface SUCoreConnectMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } stateLock;
@property (nonatomic) struct { unsigned int val[8]; } clientConnectionAuditToken;
@property (getter=isBoostable) BOOL boostable;
@property (readonly, nonatomic) long long messageType;
@property (readonly, retain, nonatomic) NSString *messageName;
@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, retain, nonatomic) NSString *clientIDRaw;
@property (readonly, nonatomic) int clientProcessIdentifier;
@property (readonly, retain, nonatomic) SUCoreConnectVersion *version;
@property (readonly, retain, nonatomic) NSError *error;
@property (readonly, retain, nonatomic) NSDictionary *message;
@property (readonly, retain, nonatomic) NSSet *allowlistedClasses;

+ (id)nameForMessageType:(long long)a0;
+ (BOOL)validateMessageDictionary:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)summary;
- (id)initWithType:(long long)a0 messageName:(id)a1 clientID:(id)a2 version:(id)a3 message:(id)a4;
- (id)xpcBoost;

@end
