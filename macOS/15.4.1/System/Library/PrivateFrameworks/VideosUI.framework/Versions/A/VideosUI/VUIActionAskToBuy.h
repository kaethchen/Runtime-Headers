@class NSString, NSDictionary;

@interface VUIActionAskToBuy : VUIAction

@property (retain, nonatomic) NSString *result;
@property (retain, nonatomic) NSDictionary *contextData;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;

@end
