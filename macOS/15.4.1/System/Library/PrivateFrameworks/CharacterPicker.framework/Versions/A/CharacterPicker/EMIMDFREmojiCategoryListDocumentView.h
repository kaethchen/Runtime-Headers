@interface EMIMDFREmojiCategoryListDocumentView : EMIMDFREmojiListDocumentView

- (id)init;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustScroll:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_labelForIndex:(long long)a0;
- (id)_characterMatrixViewForIndex:(long long)a0;
- (void)_handlePanGesture:(id)a0;
- (void)_sendNotificationPullOutGesture:(id)a0 start:(BOOL)a1 finished:(BOOL)a2;

@end
