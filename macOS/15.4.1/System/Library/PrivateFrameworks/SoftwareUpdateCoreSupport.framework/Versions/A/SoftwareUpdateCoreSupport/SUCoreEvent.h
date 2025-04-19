@class NSURL, NSMutableDictionary, NSString;

@interface SUCoreEvent : NSObject

@property (retain, nonatomic) NSMutableDictionary *allFields;
@property (nonatomic) BOOL changedSinceReported;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *reportedUUID;

+ (BOOL)isSharediPad;

- (void).cxx_destruct;
- (BOOL)isSuccess;
- (id)getAugmentedEvent;
- (id)getMacPlatform;
- (void)incrementErrorCount;
- (id)initWithEventDictionary:(id)a0 extendingWith:(id)a1 reportingToServer:(id)a2;
- (BOOL)isEqualErrorEvent:(id)a0;

@end
