@class AVBIOKPTPPort;

@interface AVBPTPPort : NSObject {
    AVBIOKPTPPort *_implIOKit;
}

@property (nonatomic) unsigned short portNumber;
@property (nonatomic) int portRole;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) int portType;
@property (nonatomic) unsigned char receivedPriority1;
@property (nonatomic) unsigned char receivedClockClass;
@property (nonatomic) unsigned char receivedClockAccuracy;
@property (nonatomic) unsigned short receivedOffsetScaledLogVariance;
@property (nonatomic) unsigned char receivedPriority2;
@property (nonatomic) unsigned long long receivedGrandmasterIdentity;
@property (nonatomic) unsigned short receivedStepsRemoved;
@property (nonatomic) unsigned char receivedTimeSource;
@property (nonatomic) unsigned char announcePriority1;
@property (nonatomic) unsigned char announceClockClass;
@property (nonatomic) unsigned char announceClockAccuracy;
@property (nonatomic) unsigned short announceOffsetScaledLogVariance;
@property (nonatomic) unsigned char announcePriority2;
@property (nonatomic) unsigned long long announceGrandmasterIdentity;
@property (nonatomic) unsigned short announceStepsRemoved;
@property (nonatomic) unsigned char announceTimeSource;
@property (copy, nonatomic) id /* block */ interruptionHandler;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)ptpPortWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
+ (id)ptpPortWithImplIOKit:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_impl;
- (id)initWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
- (void)serviceTerminated;
- (void)_updateFromProperties:(id)a0;
- (id)initWithImplIOKit:(id)a0;

@end
