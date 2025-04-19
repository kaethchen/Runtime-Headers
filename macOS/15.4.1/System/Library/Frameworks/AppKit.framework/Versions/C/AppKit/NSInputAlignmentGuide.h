@class NSString, NSArray;

@interface NSInputAlignmentGuide : NSObject <NSInputAlignmentGuide> {
    long long _guideType;
    NSArray *_referenceValues;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)guideWithType:(long long)a0 referenceValues:(id)a1;
+ (id)guidesBorderingRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)referenceValues;
- (long long)guideType;
- (id)initWithType:(long long)a0 referenceValues:(id)a1;

@end
