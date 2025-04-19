@class NSString;
@protocol NSObject, NSSecureCoding, NSAccessibilityElement;

@interface NSAccessibilityCustomRotorItemResult : NSObject {
    id<NSAccessibilityElement> _targetElement;
}

@property (readonly, weak) id<NSAccessibilityElement> targetElement;
@property (readonly) id<NSSecureCoding, NSObject> itemLoadingToken;
@property struct _NSRange { unsigned long long location; unsigned long long length; } targetRange;
@property (copy) NSString *customLabel;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)initWithItemLoadingToken:(id)a0 customLabel:(id)a1;
- (id)initWithTargetElement:(id)a0;

@end
