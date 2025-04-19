@class WFDialogRequest;

@interface WFSiriDialogRequest : WFSiriActionRequest

@property (readonly, nonatomic) WFDialogRequest *dialogRequest;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDialogRequest:(id)a0;

@end
