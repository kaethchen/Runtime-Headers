@interface CNContactIconImageFactory : NSObject

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })adjustRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toCenterString:(id)a1 withAttributes:(id)a2;
+ (id)circleMaskedImageWithImage:(id)a0 appearance:(id)a1 drawBorder:(BOOL)a2 borderWidth:(double)a3;
+ (BOOL)colorIsClear:(id)a0;
+ (id)companySilhouetteImageWithAppearance:(id)a0 diameter:(double)a1;
+ (id)contactSilhouetteImageWithAppearance:(id)a0 diameter:(double)a1;
+ (id)imageWithSilhouetteName:(id)a0 appearance:(id)a1 diameter:(double)a2;
+ (id)monogramImageWithInitials:(id)a0 font:(id)a1 textColor:(id)a2 backgroundColor:(id)a3 appearance:(id)a4 diameter:(double)a5;
+ (id)monogramImageWithInitials:(id)a0 font:(id)a1 textColor:(id)a2 backgroundColor:(id)a3 diameter:(double)a4;
+ (id)photoImageWithSourceImage:(id)a0 appearance:(id)a1 diameter:(double)a2;

@end
