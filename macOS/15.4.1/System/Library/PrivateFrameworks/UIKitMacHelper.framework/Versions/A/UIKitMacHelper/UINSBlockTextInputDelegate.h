@interface UINSBlockTextInputDelegate : NSObject <UINSTextInputDelegate>

@property (copy, nonatomic) id /* block */ willUpdateConnection;
@property (copy, nonatomic) id /* block */ didUpdateConnection;

- (void).cxx_destruct;
- (id /* block */)_chain:(id /* block */)a0 before:(id /* block */)a1;
- (id /* block */)_chain:(id /* block */)a0 toProperty:(id /* block */)a1;
- (void)addDidUpdateAction:(id /* block */)a0;
- (void)addWillUpdateAction:(id /* block */)a0;
- (void)textInputDidUpdateConnection:(id)a0;
- (void)textInputWillUpdateConnection:(id)a0;

@end
