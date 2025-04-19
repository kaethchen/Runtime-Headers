@class NSString, NSUUID, NSDictionary, IATextInputActionsInputMode;

@interface NSIATextInputActionsContext : NSObject <IATextInputActionsMetadataObserving>

@property (copy, nonatomic) NSString *internalProcId;
@property (nonatomic) long long source;
@property (retain, nonatomic) IATextInputActionsInputMode *inputMode;
@property (retain, nonatomic) NSUUID *sessionIdentifier;
@property (nonatomic) long long flagOptions;
@property (copy, nonatomic) NSString *appBundleId;
@property (copy, nonatomic) NSString *processBundleId;
@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)updateInputMode;
- (BOOL)isMarkedTextOn;
- (void)setMarkedText:(BOOL)a0;

@end
