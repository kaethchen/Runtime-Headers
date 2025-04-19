@class NSArray;

@interface SCRDFRControlStripApplication : SCRSystemApplication

@property (retain, nonatomic) NSArray *_applicationFunctionRows;

- (void).cxx_destruct;
- (BOOL)allowsFocusInto;
- (void)handleBrailleRoutingEvent:(id)a0 request:(id)a1;
- (BOOL)isDFRControlStripApplication;

@end
