@class NSMutableArray;

@interface OADFlattenedGroup : OADDrawable {
    NSMutableArray *mDrawables;
}

- (id)init;
- (void).cxx_destruct;
- (void)addDrawable:(id)a0;
- (id)drawables;

@end
