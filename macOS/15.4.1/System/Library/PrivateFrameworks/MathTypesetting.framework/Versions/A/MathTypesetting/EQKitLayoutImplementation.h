@class NSString, EQKitBox, EQKitEnvironment;
@protocol EQKitRootNode;

@interface EQKitLayoutImplementation : NSObject <EQKitLayout> {
    double mAscent;
    double mDescent;
    double mLeading;
    double mNaturalAlignmentOffset;
    double mScale;
    BOOL mSingleLineHeight;
    EQKitEnvironment *mEnvironment;
}

@property (readonly, nonatomic) id<EQKitRootNode> root;
@property (readonly, nonatomic) EQKitBox *box;
@property (readonly, nonatomic) double height;
@property (readonly, nonatomic) double depth;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double vsize;
@property (readonly, nonatomic) double naturalAlignmentOffset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } erasableBounds;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } naturalSize;
@property (readonly, nonatomic) double scale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)layoutWithContext:(id)a0;
- (id)initWithRoot:(id)a0 environment:(id)a1;
- (void)renderIntoContext:(id)a0 offset:(struct CGPoint { double x0; double x1; })a1;
- (id)rootInspectable;
- (id)selectionForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
