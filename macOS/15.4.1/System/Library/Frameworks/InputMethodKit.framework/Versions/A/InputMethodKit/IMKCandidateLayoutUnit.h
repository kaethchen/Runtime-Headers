@class IMKCandidateController, IMKCandidateDisplayArray, NSString, IMKCandidateUIProperties, IMKCandidateDefinitionUnit;

@interface IMKCandidateLayoutUnit : NSObject <IMKCandidateIndexing>

@property (nonatomic) IMKCandidateController *candidateController;
@property (retain, nonatomic) IMKCandidateDefinitionUnit *definitionUnit;
@property (retain, nonatomic) IMKCandidateDisplayArray *displayArray;
@property (retain, nonatomic) IMKCandidateUIProperties *UIProperties;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originalFrame;
@property (nonatomic, getter=isVerticallyAligned) BOOL verticallyAligned;
@property (copy, nonatomic) NSString *groupName;
@property (nonatomic) BOOL surfaceTruncated;
@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSString *uniqueKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)layoutUnitWithDefinitionUnit:(id)a0 properties:(id)a1;
+ (double)minimumWidthWithTitle:(id)a0 properties:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })preferredSize;
- (void)createCenteredLayoutWithWidth:(double)a0;
- (void)createLayout;
- (void)createLayoutWithPaddingOnBothSides:(double)a0;
- (id)displayArrayWithAttributedString:(id)a0;
- (id)displayArrayWithAttributedString:(id)a0 titleMargin:(double)a1 attributedAnnotation:(id)a2 annotationMargin:(double)a3;
- (id)displayArrayWithTitle:(id)a0 annotation:(id)a1;

@end
