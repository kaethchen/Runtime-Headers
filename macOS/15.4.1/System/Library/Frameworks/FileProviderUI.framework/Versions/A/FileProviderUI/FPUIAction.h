@class NSString, NSPredicate, FPProviderDomain;

@interface FPUIAction : NSObject

@property (readonly, nonatomic) NSString *uiActionProviderIdentifier;
@property (readonly, nonatomic) NSString *fileProviderIdentifier;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) BOOL displayInline;
@property (readonly, nonatomic) BOOL isNonUIAction;
@property (readonly, nonatomic) FPProviderDomain *fpProviderDomain;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 displayName:(id)a2 predicate:(id)a3 displayInline:(BOOL)a4;
- (id)initWithIdentifier:(id)a0 uiActionProviderIdentifier:(id)a1 fileProviderIdentifier:(id)a2 displayName:(id)a3 predicate:(id)a4 displayInline:(BOOL)a5 isNonUIAction:(BOOL)a6 fpProviderDomain:(id)a7;

@end
