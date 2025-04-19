@class NSString;

@interface CCSetSyncPolicy : BMResourceSyncPolicy

@property (readonly, nonatomic) NSString *setIdentifier;

- (void).cxx_destruct;
- (id)initWithPolicyDictionary:(id)a0 forSetIdentifier:(id)a1;

@end
