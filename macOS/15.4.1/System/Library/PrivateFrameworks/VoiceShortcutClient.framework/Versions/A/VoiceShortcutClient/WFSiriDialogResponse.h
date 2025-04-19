@class WFDialogResponse;

@interface WFSiriDialogResponse : WFSiriActionResponse

@property (readonly, nonatomic) WFDialogResponse *dialogResponse;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDialogResponse:(id)a0;

@end
