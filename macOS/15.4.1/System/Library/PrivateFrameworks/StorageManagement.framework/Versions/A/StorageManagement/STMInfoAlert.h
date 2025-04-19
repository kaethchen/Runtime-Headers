@class NSString;

@interface STMInfoAlert : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *recommendationIdentifier;
@property (copy) NSString *storageItemIdentifier;
@property (copy) NSString *title;
@property (copy) NSString *message;
@property (copy) NSString *actionButtonTitle;
@property BOOL isActionButtonDestructive;
@property (copy) NSString *cancelButtonTitle;
@property (copy) NSString *helpAnchor;
@property (copy) NSString *helpBook;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
