@interface TCMessagePlaceholderInfo : NSObject {
    id mKey;
    BOOL mInUse;
}

- (id)init;
- (void).cxx_destruct;
- (id)key;
- (BOOL)isInUse;
- (void)setInUse:(BOOL)a0;

@end
