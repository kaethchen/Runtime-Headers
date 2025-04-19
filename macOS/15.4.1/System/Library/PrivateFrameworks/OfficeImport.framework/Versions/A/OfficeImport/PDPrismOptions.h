@interface PDPrismOptions : PDSideDirectionOptions {
    BOOL mIsContent;
    BOOL mIsInverted;
}

- (BOOL)isContent;
- (BOOL)isInverted;
- (void)setIsContent:(BOOL)a0;
- (void)setIsInverted:(BOOL)a0;

@end
