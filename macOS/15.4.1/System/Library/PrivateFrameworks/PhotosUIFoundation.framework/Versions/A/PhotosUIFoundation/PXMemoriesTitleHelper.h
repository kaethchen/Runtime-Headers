@class NSString;

@interface PXMemoriesTitleHelper : NSObject

@property (class, readonly, nonatomic) PXMemoriesTitleHelper *defaultHelper;

@property (copy, nonatomic) NSString *softLineBreak;
@property (copy, nonatomic) NSString *truncationToken;
@property (nonatomic) long long preferredLineLength;
@property (nonatomic) double minimumScaleFactor;

- (id)init;
- (void).cxx_destruct;
- (id)displayableTextForTitle:(id)a0 intent:(long long)a1;
- (id)titleForDisplayableText:(id)a0 titleCategory:(long long)a1 options:(unsigned long long)a2;
- (BOOL)_isTextLongerThanPreferredLine:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 minimumScaleFactor:(double)a2;

@end
