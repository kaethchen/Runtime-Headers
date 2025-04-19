@class NSValue, NSString;
@protocol NSObject;

@interface NSAccessibilityCustomChooserItemResult : NSObject {
    id<NSObject> _targetElement;
}

@property (weak, nonatomic) id<NSObject> targetElement;
@property (retain, nonatomic) NSValue *targetRange;
@property (copy, nonatomic) NSString *descriptionOverride;

- (void)dealloc;
- (id)initWithTargetElement:(id)a0 targetRange:(id)a1;

@end
