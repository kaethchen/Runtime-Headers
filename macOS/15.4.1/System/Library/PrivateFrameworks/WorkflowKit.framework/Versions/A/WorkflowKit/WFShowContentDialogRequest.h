@class NSData, WFContentCollection, WFDialogButton;

@interface WFShowContentDialogRequest : WFDialogRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *archivedContentCollection;
@property (retain, nonatomic) WFContentCollection *cachedContentCollection;
@property (readonly, copy, nonatomic) WFDialogButton *doneButton;
@property (readonly, copy, nonatomic) WFDialogButton *cancelButton;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)getContentCollectionWithCompletionHandler:(id /* block */)a0;
- (id)initWithContentCollection:(id)a0 attribution:(id)a1 prompt:(id)a2;

@end
