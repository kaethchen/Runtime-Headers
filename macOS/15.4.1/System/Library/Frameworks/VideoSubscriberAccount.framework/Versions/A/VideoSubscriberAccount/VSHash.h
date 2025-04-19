@class NSData;

@interface VSHash : NSObject

@property (nonatomic, getter=isFinalized) BOOL finalized;
@property (nonatomic) struct CC_SHA256state_st { unsigned int count[2]; unsigned int hash[8]; unsigned int wbuf[16]; } ctx;
@property (copy, nonatomic) NSData *finalData;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (void)updateWithDate:(id)a0;
- (void)updateWithString:(id)a0;
- (void)updateWithUUID:(id)a0;
- (void)updateWithInteger:(long long)a0;

@end
