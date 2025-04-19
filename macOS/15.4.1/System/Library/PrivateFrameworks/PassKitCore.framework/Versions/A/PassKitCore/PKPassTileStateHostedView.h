@interface PKPassTileStateHostedView : PKPassTileState

@property (readonly, copy, nonatomic) id /* block */ hostedViewProvider;
@property (nonatomic) long long preferredStyle;

+ (id)createWithPreferredStyle:(long long)a0 hostedViewProvider:(id /* block */)a1;

- (void).cxx_destruct;

@end
