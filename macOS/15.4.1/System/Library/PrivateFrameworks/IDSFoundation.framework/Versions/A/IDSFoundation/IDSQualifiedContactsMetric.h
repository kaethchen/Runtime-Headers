@class NSNumber, NSDictionary, NSString;

@interface IDSQualifiedContactsMetric : NSObject <CUTCoreAnalyticsMetric>

@property (retain, nonatomic) NSNumber *qualifiedHandlesCount;
@property (retain, nonatomic) NSNumber *qualifiedHandlesIML;
@property (retain, nonatomic) NSNumber *handlesCount;
@property (retain, nonatomic) NSNumber *qualifiedEmergencyHandles;
@property (retain, nonatomic) NSNumber *qualifiedEmergencyHandlesIML;
@property (retain, nonatomic) NSNumber *emergencyHandlesCount;
@property (retain, nonatomic) NSNumber *qualifiedPrimaryHandles;
@property (retain, nonatomic) NSNumber *qualifiedPrimaryHandlesIML;
@property (retain, nonatomic) NSNumber *primaryHandlesCount;
@property (retain, nonatomic) NSNumber *familyHandlesCount;
@property (retain, nonatomic) NSNumber *emergencyHandleMsgCount;
@property (retain, nonatomic) NSNumber *primaryHandleMsgCount;
@property (retain, nonatomic) NSNumber *qualifiedHandleMsgCount;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
