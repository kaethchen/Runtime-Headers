@class NSURL, NSMutableAttributedString;

@interface InstantMessage : IMMessage

@property (retain) NSMutableAttributedString *textWithAppAttributes;
@property BOOL didHighlightMyName;
@property BOOL didParseText;
@property BOOL didParseSubject;
@property (getter=isSaved) BOOL saved;
@property (retain) NSURL *fileURL;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)text;
- (id)senderName;
- (id)superText;
- (BOOL)isAddressedToMe;
- (void)_upgradeText;
- (void)highlightMyNameAtRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)superMessageSubject;

@end
