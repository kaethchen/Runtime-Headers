@class NSString, NSMutableDictionary, NSDictionary;

@interface HDCloudSyncStateStore : NSObject <HDCloudSyncStateStore> {
    NSDictionary *_stateData;
}

@property (nonatomic) unsigned long long aggregateMergedDataLength;
@property (readonly, nonatomic) NSMutableDictionary *mergedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (BOOL)setData:(id)a0 forKey:(id)a1 error:(id *)a2;
- (BOOL)data:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (void)unitTest_setMergedData:(id)a0;

@end
