@class NSWindow;

@interface DKTaskIntegrityCheck : DKTask

@property (retain) NSWindow *hostWindow;
@property BOOL mdmInitiated;
@property BOOL deKOTAInitiated;
@property BOOL buddyInitiated;

+ (BOOL)isIntegralAndMDMInitiated:(BOOL)a0 withError:(id *)a1;
+ (BOOL)isIntegralWithError:(id *)a0;

- (void).cxx_destruct;
- (id)identifier;
- (void)runWithCompletion:(id /* block */)a0;
- (id)initWithHostWindow:(id)a0;
- (id)taskDescription;
- (BOOL)needsToRun;
- (BOOL)runWithError:(id *)a0;
- (id)initWithHostWindow:(id)a0 mdmInitiated:(BOOL)a1 deKOTAInitiated:(BOOL)a2 buddyInitiated:(BOOL)a3;
- (id)initWithHostWindow:(id)a0 mdmInitiated:(BOOL)a1;

@end
