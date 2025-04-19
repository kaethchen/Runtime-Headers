@class NSString, NSArray;

@interface SKADatabasePublishedLocalStatusDevice : NSObject

@property (retain, nonatomic) NSString *idsIdentifier;
@property (retain, nonatomic) NSArray *pendingStatuses;
@property (retain, nonatomic) NSArray *deliveredStatuses;
@property (readonly, nonatomic) unsigned short discoverySource;

- (void).cxx_destruct;
- (id)initWithCoreDataPulishedLocalStatusDevice:(id)a0;
- (id)initWithIDSIdentifier:(id)a0 pendingStatuses:(id)a1 deliveredStatuses:(id)a2;
- (id)initWithIDSIdentifier:(id)a0 pendingStatuses:(id)a1 deliveredStatuses:(id)a2 discoverySource:(unsigned short)a3;

@end
