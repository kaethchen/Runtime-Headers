@class NSData;

@interface NFReaderSessionPollConfig : NSObject

@property (nonatomic) unsigned int technology;
@property (retain, nonatomic) NSData *ecp;
@property (nonatomic) unsigned int pollDuration;
@property (nonatomic) BOOL skipMifareClassify;
@property (nonatomic) BOOL lpcd;
@property (nonatomic) BOOL fieldDetect;

+ (id)pollConfigWithTechnology:(unsigned int)a0;

- (id)init;
- (void).cxx_destruct;
- (id)asDictionary;

@end
