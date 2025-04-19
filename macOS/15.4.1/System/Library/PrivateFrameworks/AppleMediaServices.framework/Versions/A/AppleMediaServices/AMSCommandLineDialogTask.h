@class AMSDialogRequest;

@interface AMSCommandLineDialogTask : AMSTask

@property (readonly) AMSDialogRequest *request;
@property double maximumDialogWidth;
@property double minimumDialogWidth;
@property double dialogPadding;
@property long long automaticButtonSelection;

- (void).cxx_destruct;
- (id)present;
- (id)initWithRequest:(id)a0;
- (id)_createHorizontolLineWithWidth:(long long)a0;
- (id)_createLinesFromText:(id)a0 width:(long long)a1;
- (id)_createText:(id)a0 width:(long long)a1 centered:(BOOL)a2 omitLeftPipe:(BOOL)a3;
- (id)_createTextfieldWithTextfield:(id)a0 width:(long long)a1;
- (long long)_gatherButtonInput;
- (id)_gatherTextfieldInput;
- (id)_getUserInput;
- (void)_printMessage:(id)a0;

@end
