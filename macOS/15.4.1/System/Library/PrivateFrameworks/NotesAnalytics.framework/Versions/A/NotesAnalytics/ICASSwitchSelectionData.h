@class NSString, ICASSwitchSelectionType;

@interface ICASSwitchSelectionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;
@property (class, readonly, nonatomic) BOOL requiresDiagnosticsConsent;

@property (readonly, nonatomic) ICASSwitchSelectionType *switchSelectionType;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSwitchSelectionType:(id)a0;

@end
