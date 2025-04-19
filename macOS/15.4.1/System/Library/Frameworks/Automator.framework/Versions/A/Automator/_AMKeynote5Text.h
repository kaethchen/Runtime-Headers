@class NSColor, NSString;

@interface _AMKeynote5Text : _AMKeynote5Item

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)words;
- (id)attachments;
- (id)characters;
- (id)attributeRuns;
- (id)paragraphs;
- (void)GetURL;

@end
