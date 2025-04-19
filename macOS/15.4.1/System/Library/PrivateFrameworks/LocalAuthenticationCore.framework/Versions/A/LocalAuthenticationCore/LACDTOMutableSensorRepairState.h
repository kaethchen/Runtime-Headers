@class NSString;

@interface LACDTOMutableSensorRepairState : NSObject <LACDTOSensorRepairState>

@property (nonatomic) long long repairFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nullInstance;

- (BOOL)isEqual:(id)a0;
- (id)initWithFlag:(long long)a0;

@end
