@class OADBackground;

@interface PMBackgroundMapper : CMMapper {
    OADBackground *mBackground;
}

- (void).cxx_destruct;
- (id)initWithOadBackground:(id)a0 parent:(id)a1;
- (void)mapAt:(id)a0 withState:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })slideRect;

@end
