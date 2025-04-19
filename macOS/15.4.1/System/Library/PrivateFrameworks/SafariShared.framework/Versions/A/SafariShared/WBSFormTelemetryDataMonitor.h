@class NSString, NSMutableDictionary;

@interface WBSFormTelemetryDataMonitor : NSObject {
    NSMutableDictionary *_formIDToFormData;
}

@property (readonly, copy, nonatomic) NSString *webpageLocale;

+ (long long)formFieldTypeForFormControlMetadata:(id)a0 formMetadata:(id)a1;

- (void).cxx_destruct;
- (unsigned long long)_elementTypeForFormControlMetadata:(id)a0;
- (BOOL)_isMonitoringTextFieldWithID:(id)a0 forFormID:(long long)a1;
- (void)_sendModificationTelemetryEventsPerForm;
- (void)_sendModificationTelemetryEventsPerFormField;
- (void)_sendUsageTelemetryEventsPerForm;
- (void)_updateAutoFillOfferedType:(unsigned long long)a0 forTextFieldWithID:(id)a1 forFormID:(long long)a2;
- (void)_updateMonitorDataWithFormMetadata:(id)a0;
- (void)_updateMonitorDataWithTextFieldMetadata:(id)a0 textFieldValueLength:(unsigned long long)a1 forFormID:(long long)a2;
- (void)_updateTelemetryFieldData:(id)a0 withTextFieldMetadata:(id)a1 textFieldValueLength:(unsigned long long)a2;
- (BOOL)_wasAutoFillUsedForModificationType:(unsigned long long)a0;
- (id)initWithWebpageLocale:(id)a0;
- (void)sendTelemetryEventsOnFormSubmission;
- (void)updateAutoFillOfferedType:(unsigned long long)a0 forTextFieldWithID:(id)a1 forFormMetadata:(id)a2;
- (void)updateFormTelemetryWithFormMetadata:(id)a0 textFieldMetadata:(id)a1 textFieldValueLength:(unsigned long long)a2;

@end
