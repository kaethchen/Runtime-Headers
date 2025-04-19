@class SKPresenceOptions, NSString, SKPresencePayload, NSObject;
@protocol OS_os_activity;

@interface SKAPresenceAssertion : NSObject

@property (readonly, nonatomic) NSObject<OS_os_activity> *osActivity;
@property (readonly, copy, nonatomic) NSString *presenceIdentifier;
@property (readonly, copy, nonatomic) SKPresenceOptions *options;
@property (copy, nonatomic) SKPresencePayload *payload;

+ (id)logger;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPresenceIdentifier:(id)a0 options:(id)a1 payload:(id)a2;
- (BOOL)isEqualToPresenceAssertion:(id)a0;

@end
