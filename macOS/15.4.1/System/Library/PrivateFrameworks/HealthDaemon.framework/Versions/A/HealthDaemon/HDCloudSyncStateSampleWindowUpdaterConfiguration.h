@class NSString, NSDateInterval, NSObject, HKSampleType;
@protocol OS_os_log;

@interface HDCloudSyncStateSampleWindowUpdaterConfiguration : NSObject {
    void /* function */ *_sampleUUIDsFromCodableObjectCollectionFunction;
}

@property (readonly, copy, nonatomic) NSString *domain;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *sampleOriginKey;
@property (readonly, nonatomic) HKSampleType *sampleType;
@property (readonly, nonatomic) Class syncEntityClass;
@property (readonly, copy, nonatomic) NSDateInterval *timeWindow;
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingCategory;

- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 key:(id)a1 sampleOriginKey:(id)a2 sampleType:(id)a3 syncEntityClass:(Class)a4 timeWindow:(id)a5 loggingCategory:(id)a6 sampleUUIDsFunction:(void /* function */ *)a7;
- (id)sampleUUIDsFromCodableObjectCollection:(id)a0;

@end
