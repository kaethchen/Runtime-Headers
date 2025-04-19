@class NSString, NSDictionary, LACDTOBiometryWatchdogPack, LACDTORatchetState;

@interface LACDTOMutableLostModeFetchRequest : NSObject <LACDTOLostModeFetchRequest>

@property (nonatomic) long long policy;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL isDTOEnabled;
@property (retain, nonatomic) LACDTORatchetState *ratchetState;
@property (retain, nonatomic) LACDTOBiometryWatchdogPack *biometryWatchdogPack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
