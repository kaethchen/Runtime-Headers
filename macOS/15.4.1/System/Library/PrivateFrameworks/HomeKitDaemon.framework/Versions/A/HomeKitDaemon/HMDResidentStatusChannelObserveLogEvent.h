@class NSString, NSDictionary, NSUUID;

@interface HMDResidentStatusChannelObserveLogEvent : HMMHomeLogEvent <HMMCoreAnalyticsLogging>

@property (readonly, nonatomic) BOOL didLoseStatuses;
@property (readonly, nonatomic) BOOL didAddStatuses;
@property (readonly, nonatomic) BOOL didUpdateStatuses;
@property (readonly, nonatomic) BOOL didFindPrimary;
@property (readonly, nonatomic) BOOL didPrimaryChange;
@property (readonly, nonatomic) BOOL isStatusesEmpty;
@property (readonly, nonatomic) long long count;
@property (readonly, copy, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, copy, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) unsigned long long coreAnalyticsEventOptions;
@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, copy, nonatomic) NSString *accessoryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)denominatorEvent:(id)a0;

- (id)initWithHomeUUID:(id)a0 didLoseStatuses:(BOOL)a1 didAddStatuses:(BOOL)a2 didUpdateStatuses:(BOOL)a3 didFindPrimary:(BOOL)a4 didPrimaryChange:(BOOL)a5 isStatusesEmpty:(BOOL)a6;
- (id)initWithHomeUUID:(id)a0 didLoseStatuses:(BOOL)a1 didAddStatuses:(BOOL)a2 didUpdateStatuses:(BOOL)a3 didFindPrimary:(BOOL)a4 didPrimaryChange:(BOOL)a5 isStatusesEmpty:(BOOL)a6 count:(long long)a7;

@end
