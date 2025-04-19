@class NSString, NSDictionary;

@interface BMDiscoverabilitySignalEvent : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *context;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)new;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2 userInfo:(id)a3;
- (id)initWithIdentifier:(id)a0 bundleID:(id)a1 context:(id)a2;

@end
