@class NSMutableDictionary;

@interface FCSafariBookmark : NSObject <NSSecureCoding> {
    NSMutableDictionary *_dictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bookmarkWithDictionary:(id)a0;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)uuid;
- (void)setURL:(id)a0;
- (id)url;
- (void)setTitle:(id)a0;
- (id)dictionaryRepresentation;
- (id)title;
- (BOOL)isFolder;
- (id)initWithTitle:(id)a0 url:(id)a1;

@end
