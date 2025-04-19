@class HMDResidentSelectionInfo, HMDResidentDevice, NSArray, HMDPreferredResidentsList, NSSet, NSString, NSDictionary, NSObject, HMDResidentStatus;
@protocol OS_dispatch_queue, HMDResidentDeviceManagerContext;

@interface HMDResidentSelectionStatusKit : NSObject <HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) id<HMDResidentDeviceManagerContext> context;
@property (readonly, nonatomic) NSSet *residentStatusList;
@property (readonly, nonatomic) NSArray *sortedResidentStatuses;
@property (readonly, nonatomic) HMDResidentStatus *sourceForPreferredResidentsList;
@property (readonly, nonatomic) HMDPreferredResidentsList *preferredResidentsList;
@property (readonly, nonatomic) NSDictionary *residentIDSIdentifierToLocationMap;
@property (readonly) HMDResidentDevice *elector;
@property (readonly, nonatomic) HMDResidentSelectionInfo *selectionInfo;
@property (readonly, nonatomic) NSSet *wiredResidentIDSIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (id /* block */)comparatorForPreferredResidentsListSource;
- (id)initWithWithContext:(id)a0 residentStatusList:(id)a1;
- (id)residentIDSIdentifierToLocationMapFrom:(id)a0;
- (id)residentStatusWithValidPreferredResidentsListIn:(id)a0;
- (id)selectionInfoWithLatestTimestampIn:(id)a0;
- (id)sortResidentStatuses:(id)a0;
- (id)wiredResidentIDSIdentifiersIn:(id)a0;

@end
