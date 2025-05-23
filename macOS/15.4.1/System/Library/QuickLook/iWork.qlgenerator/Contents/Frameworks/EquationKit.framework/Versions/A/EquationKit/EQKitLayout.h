@class NSString, EQKitBox, EQKitEnvironmentInstance;
@protocol EQKitRootNode;

@interface EQKitLayout : NSObject <EQKitLayout> {
    id<EQKitRootNode> mRoot;
    double mAscent;
    double mDescent;
    double mLeading;
    double mNaturalAlignmentOffset;
    double mScale;
    BOOL mSingleLineHeight;
    EQKitEnvironmentInstance *mEnvironment;
}

@property (readonly, nonatomic) EQKitBox *box;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (double)depth;
- (double)height;
- (double)width;
- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)layoutWithContext:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })erasableBounds;
- (id)initWithRoot:(id)a0 environment:(id)a1;
- (double)naturalAlignmentOffset;
- (void)renderIntoContext:(struct CGContext { } *)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (double)vsize;

@end
