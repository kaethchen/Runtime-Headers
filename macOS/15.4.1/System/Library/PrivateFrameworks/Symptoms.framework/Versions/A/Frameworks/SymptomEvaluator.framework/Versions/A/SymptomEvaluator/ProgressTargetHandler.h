@class NSString;

@interface ProgressTargetHandler : NSObject <ConfigurableObjectProtocol, SymptomAdditionalProtocol> {
    unsigned long long regularMargin;
    unsigned long long expeditedMargin;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (int)configureInstance:(id)a0;
- (void)doActionsForNetworkType:(long long)a0;
- (BOOL)noteSymptom:(id)a0;
- (void)pruneActions;
- (int)read:(id)a0 returnedValues:(id)a1;

@end
