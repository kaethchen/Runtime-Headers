@class NSString, DOMHTMLCollection;

@interface DOMHTMLFormElement : DOMHTMLElement

@property (copy) NSString *acceptCharset;
@property (copy) NSString *action;
@property (copy) NSString *enctype;
@property (copy) NSString *encoding;
@property (copy) NSString *method;
@property (copy) NSString *name;
@property (copy) NSString *target;
@property (readonly) DOMHTMLCollection *elements;
@property (readonly) int length;

- (void)reset;
- (void)submit;
- (id)autocomplete;
- (BOOL)checkValidity;
- (BOOL)noValidate;
- (void)setAutocomplete:(id)a0;
- (void)setNoValidate:(BOOL)a0;

@end
