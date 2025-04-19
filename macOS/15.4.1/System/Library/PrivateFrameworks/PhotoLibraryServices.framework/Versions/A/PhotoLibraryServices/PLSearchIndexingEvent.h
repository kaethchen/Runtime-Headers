@class NSString, NSError, NSDate;

@interface PLSearchIndexingEvent : NSObject

@property (readonly, nonatomic) unsigned long long donationCount;
@property (readonly, nonatomic) unsigned long long deletionCount;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, copy, nonatomic) NSString *sampleIdentifier;
@property (readonly, copy, nonatomic) NSError *error;

- (id)description;
- (void).cxx_destruct;
- (id)initWithError:(id)a0;
- (id)initWithDonationCount:(unsigned long long)a0 deletionCount:(unsigned long long)a1 timestamp:(id)a2 sampleIdentifier:(id)a3;
- (id)autoBugCaptureEventDictionary;

@end
