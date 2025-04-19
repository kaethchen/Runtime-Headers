@class NSString;

@interface FavoritesPickerImageRequest : WBSSiteMetadataRequest

@property (readonly, nonatomic) NSString *title;

- (id)initWithURL:(id)a0 title:(id)a1;
- (id)initWithURL:(id)a0 extraInfo:(id)a1;

@end
