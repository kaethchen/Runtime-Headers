@interface LPAppearanceDependentValue : NSObject {
    id /* block */ _provider;
}

- (void).cxx_destruct;
- (id)initWithProvider:(id /* block */)a0;
- (id)valueForAppearance:(id)a0;

@end
