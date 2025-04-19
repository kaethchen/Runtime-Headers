@class NSString;

@interface VUIActionUpdateMusic : VUIAction

@property (retain, nonatomic) NSString *itemID;
@property (nonatomic) BOOL isExplicit;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
