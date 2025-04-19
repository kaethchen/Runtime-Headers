@class NSString;

@interface CRFormFieldLoggingStep : NSObject <CRFormPostProcessingStep>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_logField:(id)a0 index:(unsigned long long)a1 subIndex:(unsigned long long)a2;
- (id)process:(id)a0 externalFields:(id)a1 document:(id)a2 options:(id)a3;

@end
