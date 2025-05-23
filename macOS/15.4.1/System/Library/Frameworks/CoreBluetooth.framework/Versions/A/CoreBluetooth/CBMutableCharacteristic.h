@class NSArray, NSData, NSNumber, NSMutableArray;

@interface CBMutableCharacteristic : CBCharacteristic

@property (retain) NSNumber *ID;
@property (nonatomic) unsigned long long permissions;
@property (readonly, retain) NSMutableArray *subscribedCentrals;
@property (nonatomic) unsigned long long properties;
@property (retain) NSData *value;
@property (retain) NSArray *descriptors;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)handleCentralSubscribed:(id)a0;
- (BOOL)handleCentralUnsubscribed:(id)a0;
- (void)handlePowerNotOn;
- (id)initWithService:(id)a0 dictionary:(id)a1;
- (id)initWithType:(id)a0 properties:(unsigned long long)a1 value:(id)a2 permissions:(unsigned long long)a3;

@end
