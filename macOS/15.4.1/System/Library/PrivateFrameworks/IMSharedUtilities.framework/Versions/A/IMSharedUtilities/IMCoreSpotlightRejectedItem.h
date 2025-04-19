@class NSString;

@interface IMCoreSpotlightRejectedItem : NSObject

@property (readonly, nonatomic) NSString *proposedDomain;
@property (readonly, nonatomic) NSString *proposedIdentifier;
@property (readonly, nonatomic) long long reason;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 identifier:(id)a1 reason:(long long)a2;

@end
