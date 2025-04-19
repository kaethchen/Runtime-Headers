@class NSString;

@interface SCRElementArchive : NSObject

@property (retain, nonatomic) NSString *accessibilityEquivalenceTag;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } accessibilityFrame;
@property (nonatomic) struct CGPoint { double x; double y; } accessibilityVisiblePoint;
@property (retain, nonatomic) NSString *accessibilityLabel;
@property (retain, nonatomic) id accessibilityValue;
@property (nonatomic) unsigned long long accessibilityTraitsForCheckingEquivalence;

+ (unsigned long long)_traitsForCheckingEquivalence:(unsigned long long)a0;
+ (BOOL)_webElementIsValid:(id)a0;
+ (id)archiveWithElement:(id)a0;

- (id)description;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)elementIsProbablyEqualToArchive:(id)a0;
- (struct CGPoint { double x0; double x1; })hitTestPoint;
- (BOOL)storeEquivalenceComponentsForElement:(id)a0;

@end
