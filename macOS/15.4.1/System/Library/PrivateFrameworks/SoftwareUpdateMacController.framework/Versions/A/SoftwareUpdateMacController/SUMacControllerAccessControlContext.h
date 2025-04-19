@class NSString, NSDictionary;

@interface SUMacControllerAccessControlContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *clientID;
@property (readonly, nonatomic) long long priority;
@property (retain, nonatomic) NSDictionary *additionalContext;
@property (retain, nonatomic) NSString *event;
@property (nonatomic) long long eventType;
@property (nonatomic) BOOL clientDisconnectOccurred;

+ (id)_nameForAccessResponse:(long long)a0;
+ (BOOL)_shouldCurrentContext:(id)a0 releaseControlTo:(id)a1;
+ (id)nameForEventType:(long long)a0;
+ (id)nameForPriority:(long long)a0;
+ (long long)requestControlFromCurrentContext:(id)a0 requestingContext:(id)a1 error:(id *)a2;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initForClientID:(id)a0 priority:(long long)a1;

@end
