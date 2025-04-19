@class NSString;

@interface __NSTextListElementEditedRangeValidator : NSObject <NSTextContentStorageEditedRangeValidation>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })adjustedInvalidationRangeForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 limitRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 textContentStorage:(id)a2;

@end
