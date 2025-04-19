@class NSString, NSImage, NSURL, NSPathComponentCell, NSAttributedString;

@interface NSPathControlItem : NSObject {
    NSPathComponentCell *_cell;
}

@property (copy) NSString *title;
@property (copy) NSAttributedString *attributedTitle;
@property (retain) NSImage *image;
@property (readonly) NSURL *URL;

+ (id)itemWithCell:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)setURL:(id)a0;
- (id)initWithPathComponentCell:(id)a0;
- (id)pathComponentCell;

@end
