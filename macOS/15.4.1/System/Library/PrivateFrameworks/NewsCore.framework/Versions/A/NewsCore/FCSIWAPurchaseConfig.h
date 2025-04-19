@class NSString;

@interface FCSIWAPurchaseConfig : NSObject

@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *teamIdentifier;

- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0 teamIdentifier:(id)a1;
- (id)initWithConfigDictionary:(id)a0;

@end
