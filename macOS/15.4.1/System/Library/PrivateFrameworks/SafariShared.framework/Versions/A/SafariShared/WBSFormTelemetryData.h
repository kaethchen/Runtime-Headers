@class NSDictionary;

@interface WBSFormTelemetryData : NSObject

@property (copy, nonatomic) NSDictionary *fieldIDToSingleFieldData;
@property (readonly, nonatomic) long long formID;
@property (readonly, nonatomic) unsigned long long formType;

- (void).cxx_destruct;
- (id)initWithFormType:(unsigned long long)a0 formID:(long long)a1;

@end
