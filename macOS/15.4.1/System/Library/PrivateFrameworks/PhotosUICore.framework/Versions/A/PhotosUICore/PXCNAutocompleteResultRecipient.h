@class CNAutocompleteResultValue;

@interface PXCNAutocompleteResultRecipient : NSObject

@property (readonly, nonatomic) CNAutocompleteResultValue *resultValue;
@property (readonly, nonatomic) long long recipientKind;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (nonatomic) long long validationType;

- (id)description;
- (void).cxx_destruct;
- (id)initWithResultValue:(id)a0;

@end
