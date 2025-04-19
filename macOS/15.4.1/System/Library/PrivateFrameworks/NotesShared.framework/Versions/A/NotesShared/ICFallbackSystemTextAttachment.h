@class NSString;

@interface ICFallbackSystemTextAttachment : NSTextAttachment

@property (readonly, copy, nonatomic) NSString *contentIdentifier;
@property (readonly, copy, nonatomic) NSString *systemClassName;

- (void).cxx_destruct;
- (id)attachmentCell;
- (id)initWithData:(id)a0 type:(id)a1 contentIdentifier:(id)a2 systemClassName:(id)a3;

@end
