@class NSColor, NSAttributedString;

@interface FBKRequestRecord : DEDRequestRecord

@property (readonly) NSAttributedString *attrRequestHeader;
@property (readonly) NSAttributedString *attrResponseHeader;
@property (readonly) NSAttributedString *attrRequestBody;
@property (readonly) NSAttributedString *attrResponseBody;
@property (readonly) NSColor *displayColor;

- (id)description;
- (id)attributedStringAttributes;

@end
