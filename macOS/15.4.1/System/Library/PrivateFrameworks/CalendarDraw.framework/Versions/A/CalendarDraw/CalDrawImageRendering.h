@interface CalDrawImageRendering : NSObject

+ (void)clearImageCache;
+ (id)cachedOccurrenceImageForCalendarColor:(id)a0 tileOptions:(id)a1;
+ (id)eventIcon:(id)a0 withName:(id)a1 withColor:(id)a2;
+ (id)imageForSymbolName:(id)a0 style:(long long)a1 foregroundColor:(id)a2 backgroundColor:(id)a3 selected:(BOOL)a4 pointSize:(double)a5;
+ (id)_imageForBarColor:(id)a0 backgroundColor:(id)a1 options:(id)a2;
+ (id)_imageForBarColor:(id)a0 backgroundColor:(id)a1 stripeColor:(id)a2 stripedImageAlpha:(double)a3 options:(id)a4;
+ (struct CGImage { } *)_imageForBarColor:(id)a0 backgroundColor:(id)a1 stripeColor:(id)a2 stripedImageAlpha:(double)a3 scaleFactor:(double)a4 options:(id)a5;
+ (id)_imageWithName:(id)a0 andCalColor:(id)a1;
+ (id)_imageWithName:(id)a0 andColor:(id)a1;
+ (id)allDayInvitationOutlineFlatBothWithColor:(id)a0;
+ (id)allDayInvitationOutlineFlatLeftWithColor:(id)a0;
+ (id)allDayInvitationOutlineFlatRightWithColor:(id)a0;
+ (id)allDayInvitationOutlineWithColor:(id)a0;
+ (double)backGroundAlphaDark:(BOOL)a0;
+ (double)backgroundAlphaForCalendarColor:(id)a0 darkBackground:(BOOL)a1;
+ (id)backgroundColorForColor:(id)a0 opaque:(BOOL)a1 isDark:(BOOL)a2;
+ (id)createImageWithSymbolName:(id)a0 style:(long long)a1 foregroundColor:(id)a2 backgroundColor:(id)a3 pointSize:(double)a4;
+ (id)dotImageForOccurrenceColor:(id)a0 size:(struct CGSize { double x0; double x1; })a1 strokeWidth:(double)a2 options:(id)a3;
+ (id)imageForReminderWithOptions:(id)a0;
+ (id)imageWithName:(id)a0 andType:(id)a1;
+ (struct CGImage { } *)newCGImageForReminderWithOptions:(id)a0 scaleFactor:(double)a1;
+ (void)pushRoundedRectPath:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1 withCornerRadius:(double)a2;
+ (id)tentativeOutlineWithColor:(id)a0;

@end
