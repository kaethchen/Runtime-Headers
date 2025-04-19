@interface SearchUISettingToggleLeadingViewController : SearchUIThumbnailViewController

+ (BOOL)supportsRowModel:(id)a0;

- (unsigned long long)type;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)setupView;
- (id)imageForRowModel:(id)a0 appearance:(id)a1;
- (double)symbolFontSize;
- (void)updateWithRowModel:(id)a0;

@end
