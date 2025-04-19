@class ICOutlineController, ICTTTextStorage;

@interface ICTTTextContentStorage : NSTextContentStorage

@property (retain, nonatomic) ICOutlineController *outlineController;
@property (readonly, nonatomic) ICTTTextStorage *textStorage;

- (id)init;
- (void).cxx_destruct;
- (void)addTextLayoutManager:(id)a0;
- (void)removeTextLayoutManager:(id)a0;
- (void)setExpanded:(BOOL)a0 forSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)canCollapseSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)canExpandSectionsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)collapseAllSections;
- (void)expandAllSections;
- (id)initWithTextStorage:(id)a0 outlineState:(id)a1;
- (BOOL)isUUIDHidden:(id)a0;

@end
