@class NSArray, NSDictionary, NSMutableDictionary, NSAttributedString;

@interface NSExtensionItem : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_userInfo;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSAttributedString *attributedTitle;
@property (copy) NSAttributedString *attributedContentText;
@property (copy) NSArray *attachments;
@property (copy) NSDictionary *userInfo;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setAttributedTitle:(id)a0;
- (id)attributedTitle;
- (void)setAttachments:(id)a0;
- (id)_matchingDictionaryRepresentation;
- (id)attachments;
- (id)attributedContentText;
- (void)setAttributedContentText:(id)a0;

@end
