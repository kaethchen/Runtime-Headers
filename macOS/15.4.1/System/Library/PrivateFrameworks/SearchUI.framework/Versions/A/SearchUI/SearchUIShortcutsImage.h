@class WFContextualActionIcon;

@interface SearchUIShortcutsImage : SearchUIImage

@property (retain, nonatomic) WFContextualActionIcon *icon;

+ (id)imageFromContexualActionIcon:(id)a0;

- (void).cxx_destruct;
- (void)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1 completionHandler:(id /* block */)a2;
- (id)initWithSFImage:(id)a0;

@end
