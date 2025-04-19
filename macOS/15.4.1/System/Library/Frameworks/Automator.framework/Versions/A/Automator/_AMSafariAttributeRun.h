@class NSColor, NSString;

@interface _AMSafariAttributeRun : _AMSafariItem

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)words;
- (id)attachments;
- (id)characters;
- (id)attributeRuns;
- (id)paragraphs;

@end
