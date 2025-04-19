@class NSNumber, NSString;

@interface LACDTOMutableTimerConfiguration : NSObject <LACDTOTimerConfiguration>

@property (retain, nonatomic) NSNumber *coolOff;
@property (retain, nonatomic) NSNumber *waitingForSecondAuth;
@property (retain, nonatomic) NSNumber *ready;
@property (retain, nonatomic) NSNumber *dtoFallback;
@property (retain, nonatomic) NSNumber *globalFallback;
@property (retain, nonatomic) NSNumber *lostMode;
@property (retain, nonatomic) NSNumber *gracePeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setValue:(id)a0 forTimer:(long long)a1;

@end
