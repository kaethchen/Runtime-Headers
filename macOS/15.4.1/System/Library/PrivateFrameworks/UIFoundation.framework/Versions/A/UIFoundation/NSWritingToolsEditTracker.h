@class NSMutableArray, NSMapTable;

@interface NSWritingToolsEditTracker : NSObject {
    NSMutableArray *_edits;
    NSMapTable *_uuidToEdit;
    struct _NSRange { unsigned long long location; unsigned long long length; } _contextRange;
}

@property (readonly) struct _NSRange { unsigned long long location; unsigned long long length; } currentContextRange;

- (id)init;
- (void).cxx_destruct;
- (void)addEditForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 lengthDelta:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })adjustRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSuggestionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 UUID:(id)a1 applyDelta:(BOOL)a2;
- (unsigned long long)_adjustLocation:(unsigned long long)a0;
- (void)_indirect_addRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 delta:(long long)a1 uuid:(id)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_indirect_adjustRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 forUUID:(id)a1;
- (void)_indirect_removeRange:(id)a0;
- (void)addEditForSuggestionWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 lengthDelta:(long long)a1 UUID:(id)a2;
- (id)initWithContextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)removeEditForSuggestionWithUUID:(id)a0;

@end
