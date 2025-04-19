@class NSColor, NSString;

@interface _AMiPhoto6AttributeRun : _AMiPhoto6Item

@property (copy) NSColor *color;
@property (copy) NSString *font;
@property long long size;

- (id)words;
- (id)attachments;
- (id)characters;
- (id)attributeRuns;
- (id)paragraphs;

@end
