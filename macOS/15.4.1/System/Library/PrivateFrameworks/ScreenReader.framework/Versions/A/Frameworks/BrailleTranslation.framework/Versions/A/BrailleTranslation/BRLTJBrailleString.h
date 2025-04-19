@class BRLTJBrailleStringInternal, NSString;

@interface BRLTJBrailleString : NSObject

@property (readonly) BRLTJBrailleStringInternal *underlyingObject;
@property (readonly, copy, nonatomic) NSString *string;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSelection;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSFocus;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSSuggestion;
@property (readonly, nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } NSStage;
@property (readonly, nonatomic) NSString *stageSignalledString;

- (void).cxx_destruct;
- (id)initWithUnderlyingObject:(id)a0;
- (id)stageString;
- (BOOL)isStageEmpty;

@end
