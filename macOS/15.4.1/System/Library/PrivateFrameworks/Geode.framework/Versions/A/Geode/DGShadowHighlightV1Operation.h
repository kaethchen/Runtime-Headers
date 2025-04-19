@class NSNumber, NSString;

@interface DGShadowHighlightV1Operation : DGOperation <DGAutoCalculable>

@property (copy) NSNumber *inputShadowAmount;
@property (copy) NSNumber *inputHighlightAmount;
@property (copy) NSNumber *inputMidtoneContrast;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;
+ (id)autoCalculatedInputKeys;
+ (BOOL)supportsAutoCalculatedValues;

@end
