@class NSString, NSAttributedString;

@interface LUSearchTermIndicator : NSFindIndicator <NSFindIndicatorDelegate>

@property (retain, nonatomic) NSAttributedString *searchTerm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)normalizedString:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)drawContentsForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSearchTerm:(id)a0 targetView:(id)a1 targetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
