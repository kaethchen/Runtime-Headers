@class PKMathRecognitionItem, NSUUID, NSString, NSArray;

@interface PKMathRecognitionToken : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (weak, nonatomic) PKMathRecognitionItem *item;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } characterRange;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) long long columnIndex;
@property (nonatomic) BOOL isTrigonometric;
@property (copy, nonatomic) NSArray *errors;
@property (copy, nonatomic) NSArray *alternatives;
@property (copy, nonatomic) NSArray *renderableAlternatives;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;

@end
