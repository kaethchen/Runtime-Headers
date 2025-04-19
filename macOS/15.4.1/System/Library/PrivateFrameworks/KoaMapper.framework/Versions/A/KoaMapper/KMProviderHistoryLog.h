@class NSString, KVDictionaryLog;

@interface KMProviderHistoryLog : NSObject {
    KVDictionaryLog *_log;
    NSString *_originAppId;
    BOOL _donationStartTimeRecorded;
}

- (void).cxx_destruct;
- (unsigned long long)getVersion;
- (id)_recordVersion:(unsigned long long)a0;
- (id)getHistoryToken;
- (id)_recordDonationEndTime;
- (id)_recordHistoryToken:(id)a0;
- (id)getDonationEndTime;
- (id)getDonationStartTime;
- (id)initWithDirectory:(id)a0 originAppId:(id)a1;
- (BOOL)recordChangesAcceptedWithVersion:(unsigned long long)a0 historyToken:(id)a1;
- (BOOL)recordDonationStartTime;

@end
