@class NSFunctionRow;

@interface _NSFunctionRowRootView : NSFunctionRowBackgroundColorView {
    NSFunctionRow *_functionRow;
}

@property (readonly, weak) NSFunctionRow *functionRow;

+ (id)keyPathsForValuesAffectingFunctionRow;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)accessibilityParentAttribute;
- (id)initWithFunctionRow:(id)a0;

@end
