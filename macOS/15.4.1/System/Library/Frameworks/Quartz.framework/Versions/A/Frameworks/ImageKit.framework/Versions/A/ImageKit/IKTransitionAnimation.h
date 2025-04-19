@interface IKTransitionAnimation : NSAnimation {
    SEL _selectorToCall;
}

- (void)setCurrentProgress:(float)a0;
- (void)setSelectorToCall:(SEL)a0;

@end
