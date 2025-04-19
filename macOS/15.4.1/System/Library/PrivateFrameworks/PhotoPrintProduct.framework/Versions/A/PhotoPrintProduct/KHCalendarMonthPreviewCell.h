@class NSLock, NSDate;

@interface KHCalendarMonthPreviewCell : KHCalendarCell {
    NSDate *_calendarDate;
    NSLock *_cachedDocumentLock;
    struct CGPDFDocument { } *_cachedDocument;
}

- (void)dealloc;
- (id)init;
- (id)calendarDate;
- (void)setCalendarDate:(id)a0;
- (BOOL)drawsPhotoFrame;
- (void)_cachePDFPreviewInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 environment:(id)a1;
- (BOOL)drawsContentFrame;
- (BOOL)drawsDateFrame;
- (void)fillCellContentInContext:(struct CGContext { } *)a0 environment:(id)a1 scale:(double)a2;

@end
