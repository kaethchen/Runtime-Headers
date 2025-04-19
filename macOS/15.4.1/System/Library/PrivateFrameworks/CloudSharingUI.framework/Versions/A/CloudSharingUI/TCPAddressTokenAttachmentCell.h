@interface TCPAddressTokenAttachmentCell : NSTokenAttachmentCell

@property (nonatomic) BOOL displayAsExternal;
@property BOOL neverShowSeparator;

+ (id)colorForExternalDomain;

- (id)_immediateActionAnimationControllerForTokenAttachment:(id)a0 inTextView:(id)a1;
- (id)tokenTintColor;

@end
