@class NSUUID, WFVariableString;

@interface WFChooseFromMenuItemSynonym : NSObject

@property (readonly, nonatomic) NSUUID *identity;
@property (readonly, nonatomic) WFVariableString *synonym;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)a0 synonym:(id)a1;

@end
