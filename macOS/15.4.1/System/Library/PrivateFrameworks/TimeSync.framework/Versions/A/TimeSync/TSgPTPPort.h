@class _TSF_TSDgPTPPort, NSObject;
@protocol OS_dispatch_queue;

@interface TSgPTPPort : NSObject {
    _TSF_TSDgPTPPort *_impl;
}

@property (readonly, nonatomic) unsigned short portNumber;
@property (readonly, nonatomic) int portRole;
@property (readonly, nonatomic) int portType;
@property (readonly, nonatomic) unsigned long long clockIdentifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)gPTPPortWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)gPTPPortWithImplDC:(id)a0;
+ (id)keyPathsForValuesAffectingClockIdentifier;
+ (id)keyPathsForValuesAffectingPortNumber;
+ (id)keyPathsForValuesAffectingPortRole;
+ (id)keyPathsForValuesAffectingPortType;
+ (id)keyPathsForValuesAffectingPropertyUpdateQueue;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (int)portType;
- (unsigned short)portNumber;
- (unsigned long long)clockIdentifier;
- (id)initWithImplDC:(id)a0;
- (id)getMetrics;
- (id)getMetricsWithDelta:(id)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
- (int)portRole;
- (id)propertyUpdateQueue;
- (void)serviceTerminated;
- (void)setPropertyUpdateQueue:(id)a0;
- (BOOL)startAutomaticPropertyUpdates;
- (BOOL)stopAutomaticPropertyUpdates;
- (void)updateProperties;

@end
